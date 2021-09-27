set print null-stop
set print pretty

VDiskInfos.push_back(diskInfo); // /dev/sdb ext3


b agent_slave_unknow.cpp:383
b AgentDiskCloneTask::ProcessWorkers
b DiskCloneConsole::CmdProcessHeaderWorkers
b BLKWorkerHeader::Process

b DiskCloneProcessorClone::ThreadProcessHeaderWorkers

b DiskCloneProcessorClone::ThreadProcessCloneWorker
b TransferVmdk.cpp:344
b TransferVmdk.cpp:286 

b TransferVmdk::Close()

b TransferVmdkTcp::OpenDisk

1563040
775

b TransferMsgCommBase::Comm
b TransferVmdkTcp::SendThread

b blk_worker_header.cpp:14 (构造得到m_mapInfo)

console.AckConsoleBegin(); //子进程先给父进程发送"ack.slave.initialized"消息(ACK_SLAVE_INITIALIZED)
SendNotification ( Command & cmd_notification ) //子进程发
GetNextCommand ( Command & cmd ) //子进程收


slaveApplicationProxy_.ReadNotification( cmdNotification ) //父进程读子进程消息
OnSlaveNotification( cmdNotification )
if ( cmdNotification.GetName() == ACK_SLAVE_INITIALIZED )
    FireImpulse( new AgentStateImpulse( IMPULSE_SLAVE_BEGIN ) ); //父进程接收到子进程消息触发IMPULSE_SLAVE_BEGIN状态机
    1201//AGENT_TRANSITION( PREPING,  IMPULSE_SLAVE_BEGIN,   WORKING_HEADER,   &AgentTaskUnknow::EnStateWorkingHeader,   &AgentTaskUnknow::OnSlaveBegin )
	OnSlaveBegin
		
	EnStateWorkingHeader












OnGetWorkingProgress:186 Working on disk headers










AgentNetServiceMain::OnRecvDiskCloneTask
	runtimeSetting_.BackupSetting.BackupPartitions = clDiskcloneTaskMsg.szPartitions;
		AgentNetServiceMain::FinishConfig ()
			GetSelectedVolumes( runtimeSetting_.BackupSetting.BackupPartitions, selectedVolumes );
				selectedVolumes.push_back( backupPartitions.substr( nBegin ) );
					clusterVolumes_.BackupVolumes.push_back( selectedVolumes[ i ] );   //or
					diskcloneVolumes_.BackupVolumes.push_back( selectedVolumes[ i ] ); //or
					diskcloneVolumes_.BackupVolumes = selectedVolumes;
					AgentNetService::NotifyProcess( new AgentStateImpulse( IMPULSE_SYSTEM_INITIALIZE ) ); //OnSystemInitialize
	
AgentMainProcessEx::OnSystemInitialize
	diskCloneProcess_->Initialize( service_->GetDiskcloneVolumes(),service_->GetRuntimeSetting(),service_->GetClusterVolumes(),service_->GetClusterInfoSet());
	
AgentTaskUnknow::OnSlaveBegin
	AgentComponentMgr::Instance().diskMgr_->ConvertToDiskCloneWorkerInfo(selectedVolumes_,setCloneWorkers,setHeaderWorkers )
		itDisk = mapSelectedDisk.begin()
		itDev = m_mapCurDevs.find(itDisk->first);
		header.dev = itDev->second;
		vecHeaderWorkers.push_back(header);

AgentTaskUnknow::OnSlaveBegin
	AgentComponentMgr::Instance().diskMgr_->ConvertToDiskCloneWorkerInfo(selectedVolumes_, setCloneWorkers, setHeaderWorkers )
		vecCloneWorkers.push_back(worker); //worker来自m_mapCurDevs.find(uID)
		vecHeaderWorkers.push_back(header);//worker来自m_mapCurDevs.find(itDisk->first)
	AgentDiskCloneTask::ProcessWorkers( setHeaderWorkers, setCloneWorkers ); //setCloneWorkers_ = setCloneWorkers;
	AgentDiskCloneTask::ProcessPendingPositions();
	pSlave->InitParam( stDiskCloneParam ) //给 slave 发送："cmd.diskclone.initialize" (CMD_DISKCLONE_INIT_PARAM)
	pSlave->ProcessHeaderWorker( setHeaderWorkers_ );//master 将 setHeaderWorkers 发给 slave，发送"cmd.diskclone.process_header_worker" (CMD_DISKCLONE_PROCESS_HEADER_WORKER)
	
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
								
							m_pStorageClient->CloseDisk();	//给存储发送关闭Disk的命令
								msg.Comm(MSG_DISK_CLONE_CLOSE_QCOW2, (TransferTcpClient*)m_pCtrl)
									TransferMsgCommBase::Comm(int codeNumber, TransferTcpClient *pcTcp)	
										pcTcp->Writen((unsigned char*)buf, clPackage.GetLen())
											send(m_iSocket, ptr, nSendLen, 0)
								
void TransferVmdkTcp::SendThread() //SendThread线程函数
	SendBuffer(idx)
		pObj->m_buffer.GetBuffer(uTotal)
			return m_buf
		FlushData(uTotal)
			msg.Comm(MSG_DISK_CLONE_FLUSH_VMDK_DATA, (TransferTcpClient*)m_pCtrl)
				Pack(&protoObj); 
				clPackage.Pack(buf, sizeof(buf), protoObj)
				TransferTcpClient::Writen
					send(m_iSocket, ptr, nSendLen, 0)
//master:
b AgentSlave::ThreadProc
b AgentTaskUnknow::EnStateWaittingWorker

//slave:						
b DiskCloneProcessorClone::OnCmdProcessCloneWorker			
b DiskCloneProcessorClone::ThreadProcessCloneWorker

b DiskCloneConsole::CmdProcessCloneWorkers

b DiskCloneProcessorClone::OnCmdProcessHeaderWorkers

b DiskCloneProcessorClone::ThreadProcessHeaderWorkers
b DiskCloneConsole::AckHeaderDone

b DiskCloneConsole::AckWorkerEnd

(gdb) p pShMem
$12 = (BitmapMemStruct *) 0x7fa4790ed020
(gdb) p m_pBMMem
$15 = (CBitMapMem *) 0x1cb4f28
(gdb) p pBitMapMem
$17 = (PBitmapMemStruct) 0x7fa4790ed020


DiskCloneProcessorClone::ThreadProcessCloneWorker	
	InitBitMap()
	console_.AckWorkerBegin() //给master发送ACK_DISKCLONE_CLONE_WORKER_BEGIN
	console_.AckVolumeCloneBegin(GetDiskIndex(workerInfo_.dev.id), GetPartIndex(workerInfo_.dev.id), workerInfo_.dev.start_sector); //给master发送ACK_DISKCLONE_VOLUME_BEGIN
	                                                                                                                                //DiskIndex, VolumeIndex, VolumeBeginSector
	worker.GetTotalInfo(cloneParam_.enableFullBackup, ulTotalSectors, ulConsumedSectors)	
		BLKWorkerClone::GetTotalInfo
		CJoinFS::openVolume(pDev->path.c_str(), pDev->total_sectors,  bFull); //打开本地 /dev/sdb
		m_cjfs->readSuperBlock();
			(*cbfs)->readSuperBlock()
		m_cjfs->readBitBlocks()
	progress_.Initialize(GetDiskIndex(workerInfo_.dev.id), GetPartIndex(workerInfo_.dev.id), ulTotalSectors, ulConsumedSectors);	//
	worker.Clone()
		m_cjfs->readData(*this, m_stInfo.stContext.ulLastProcessedSector, 0) //分析bitmap，读取有效数据
			CBaseFS::readData (CDiskCloneIOStream & ioStream, uint64_t lastPosition, uint64_t endPosition, uint64_t offsetPosition)
				while(nBlocks < nEndBlocks){
				ioStream.Sync( offset / 512 + offsetPosition, readLen / 512 ) //每次读取128=(65536/512)个扇区，
					BLKWorker::Sync
						OpenLocalDev()
						m_HardDisk.HDRead(pBuf, ulOffset, uSectors) //读取磁盘数据
						WriteCache(ulOffset, pBuf, iSectorsRead) 
							syncWriter.Write(ulOffset, (void*)pBuf, uiLen)
								BLKWorker::OpenRemoteDev()	//打开存储disk
									m_pStorageClient->OpenDisk(uDiskIndex)
										SlaveStorageClient::OpenDiskByType
											pVmdk_->Ioctl(TRANSFER_VMDKOP_TCP_IOCTL_CREATESEND, (void*)&speed_, uLen)
												CreateSendThread()
													TransferVmdkTcp::SendThread //上面send函数
											TransferVmdk::Open
												creator.Create(m_pCtrl, m_data) //4302存储端口
													data.Create(pCtrl->GetIP(), uDataPort) //192.168.2.73:4302
														m_iSocket = socket(PF_INET, SOCK_STREAM, 0)
														::connect(m_iSocket, (sockaddr*)&sockAddr, sizeof(sockAddr)) //192.168.2.73:4302
													data.Readn((unsigned char*)szBuf, sizeof(szBuf)) 
													SendSocket(pCtrl, strSocket) //Info:47b61e23fdf7_0_0: Close DataSock [17] Info:47b61e23fdf7_0_0: Set DataSock [17] -> [18]
													TransferTcpDataChannelCreator::SendSocket	
														msg.Comm(MSG_DISK_CLONE_SOCKET_VALUE, (TransferTcpClient*)pCtrl)
												OpenDisk(m_uDiskNum) //Open /data/StoreBackup/47b61e23fdf7/Y8VDHYT9QYOGIWTY6ZOANJPQH17RA85O/hd1/1_20210714-112922.dsf
												m_pCtrl->SetDataChannel(true)
											user_.m_pEvtHandler->OnChannelCreated(user_.m_eChannelType)
												console_.AckChannelType(bCluster, (unsigned int)eType); //ACK_DISKCLONE_CHANNEL_TYPE, ack.diskclone.channel_type
										
								IsOverLap(vecActive, seg)
								vecActive.push_back(seg) //IsOverLap为false执行这里
								m_pStorageClient->WriteBlockData(pBuf+ulSkip, ulSendLen, ulTargetOffset, lLogicalOffset)
									 pVmdk_->Write((unsigned char*)pData, iSectors, lOffsetSectors, lVolumeRelativeOffsetSectors)
										TransferVmdk::Write(unsigned char *pBuf,__int64 nSectorToWrite,__int64 nAbsSectorOffset,__int64 nRelSectorOffset)
											TransferVmdkTcp::Write //Line156
												pBuf->m_buffer.Write((unsigned char *)(&nAbsSectorOffset), sizeof(__int64));
												pBuf->m_buffer.Write((unsigned char *)(&nSectorToWrite), sizeof(__int64));                                                                                                      │
												pBuf->m_buffer.Write(pData, (unsigned int)ullDataSize);  
													TransferBuffer::Write(unsigned char *pBuf, unsigned int uLen) //Line45
														memcpy(m_buf + m_uCurSize, pBuf, uLen);
				}


	
TransferVmdk.cpp:194 pBuf->m_buffer.IsFull(uLen)  m_conditionQueue.notify_all();  //判断出 m_buf 满了的话，比如达到65536=64KB 就唤醒发送线程进行数据的发送
	
	
TransferVmdkTcp::SendBuffer
	pObj->m_buffer.GetBuffer(uTotal);
	FlushData(uTotal) //将 MSG_DISK_CLONE_FLUSH_VMDK_DATA 发给存储，让存储先卡在recv的地方准备接收数据
		msg.Comm(MSG_DISK_CLONE_FLUSH_VMDK_DATA, (TransferTcpClient*)m_pCtrl)
	uTotal != m_data.Writen(pBuf, uTotal)
	DiskCloneProcessorClone::OnDataTransfered ( int iSectors, int64_t offsetSectors , unsigned int uiCurrentSpeed)
		console_.AckVolumeCloneOffset(GetDiskIndex(workerInfo_.dev.id), GetPartIndex(workerInfo_.dev.id),offsetSectors);   	
	
DiskCloneProcessorClone::OnDataTransfered
	console_.AckVolumeCloneOffset(GetDiskIndex(workerInfo_.dev.id), GetPartIndex(workerInfo_.dev.id), offsetSectors); //slave发送："ack.diskclone.volume_offset" ACK_DISKCLONE_VOLUME_OFFSET
		CMD_SET( "DiskIndex", unsigned int, diskIdx );
		CMD_SET( "VolumeIndex", unsigned int, partitionIdx );
		CMD_SET( "OffsetSectors", uint64_t, offsetSectors );
	
	
	
	
(gdb) p localpartitionInfo.VolumeUuid
$40 = "cbeef138-1251-4148-8c8f-3b168db47fd9"
(gdb) p localpartitionInfo.VolumeName.c_str()
$41 = 0x7fe3f0005498 "/dev/sda1"
(gdb) p localpartitionInfo.strFileSystemName
$42 = "xfs"

"msdos"    //是由parted函数获取的
"Unknown"  // /dev/sda2没找到挂在点就是	"Unknown"  /home/ch/AceSure/Client_6_0/common/system/Volumes/linux/CEnumVolume.cpp:Line228

