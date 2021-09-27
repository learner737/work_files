//slave: 收到 master 的 "cmd.diskclone.process_header_worker" (CMD_DISKCLONE_PROCESS_HEADER_WORKER)
DiskCloneConsole::CmdProcessHeaderWorkers
	processor_->OnCmdProcessHeaderWorkers( vec )
		DiskCloneProcessorClone::OnCmdProcessHeaderWorkers
			workingThread_ = new boost::thread(boost::bind( &DiskCloneProcessorClone::ThreadProcessHeaderWorkers, this ) )
				DiskCloneProcessorClone::ThreadProcessHeaderWorkers ()
					worker.Process()
						BLKWorkerHeader::Process(void)
							SlaveStorageClient::OpenDisk
								SlaveStorageClient::OpenDiskByType
									TransferVmdkTcp::Ioctl
										case TRANSFER_VMDKOP_TCP_IOCTL_CREATESEND 
											TransferVmdkTcp::CreateSendThread()
												m_pSendThread = new boost::thread(boost::bind(&TransferVmdkTcp::SendThread, this));
							BackupBaseData(*itPart); // TOSEE这里/dev/sdb的来源
								clMetadata.Load(stHeaderInfo.dev.path, vecRegions) //没干啥
								clMBR.CMScanner(stHeaderInfo.dev.path.c_str(), type);
									chd.HDOpen //open "/dev/sdb"
									this->ReadFirst128() //lstBack.push_back(back); {0, 128}
									CMbr::ReadHiden()
										cdn.DPProbe() //获取所有磁盘的分区信息，最终存放到 DiskPartition
											std::vector<struct DiskInfo>& vecDisk = cev.EVGetVolumes();//CEnumVolume::EVGetPartitionInfos()
												GetPartsFromProcSys()
												clMountScanner.Scan()
												clMountScanner.GetMountDev(strMountPoint, strBootPart) // /dev/sda1  /boot
												ped_device_probe_all(); //parted库函数获取所有dev
											//遍历vecDisk，将disk信息存到 DiskPartition 中
									ReadMBRInfos() //读取一个扇区
									CMbr::readData(dataReader reader, void * ctx, int64_t nLastPosition)
										chd.HDRead(memBuf, startLBA, readLen)
										reader(ctx, startLBA, memBuf, ret)//函数指针指向下面函数 MBRDataReader，将 HDRead 读取的/dev/sdb 128+1扇区数据存到 m_buf 缓存中
											BLKWorkerHeader::MBRDataReader(void *param, int64_t offset, void *block, int blocksize)
												pStorageClient->WriteBlockData((char *)block, blocksize, offset, offset)
													pVmdk_->Write((unsigned char*)pData, iSectors, lOffsetSectors, lVolumeRelativeOffsetSectors)
														TransferVmdk::Write(unsigned char *pBuf,__int64 nSectorToWrite,__int64 nAbsSectorOffset,__int64 nRelSectorOffset)
															TransferVmdkTcp::Write //Line156
																pBuf->m_buffer.Write((unsigned char *)(&nAbsSectorOffset), sizeof(__int64));
																pBuf->m_buffer.Write((unsigned char *)(&nSectorToWrite), sizeof(__int64));                                                                                                      │
																pBuf->m_buffer.Write(pData, (unsigned int)ullDataSize);  
																	TransferBuffer::Write(unsigned char *pBuf, unsigned int uLen) //Line45
																		memcpy(m_buf + m_uCurSize, pBuf, uLen);
							m_pStorageClient->Flush(); //这里将头部128+1的扇区数据flush出去，调用 m_conditionQueue.notify_all() 唤醒下面 SendThread 线程通过 send 将 m_buf 数据发送到存储中心	
								m_conditionQueue.notify_all()