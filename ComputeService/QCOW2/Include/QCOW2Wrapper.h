/*------------------------------------------------------------------------------
 * FILE Name: QCOW2Wrapper.h
 *
 * Description: Interface for class QCOW2Wrapper.
 * format details: https://people.gnome.org/~markmc/qcow-image-format.html
 *
 * COPYRIGHT
 *
 * Created on: 2015.10.10 Author: Pian, Haisheng
 *
 * Modified by name on $(date)
 * ---------------------------------------------------------------------------*/

#ifndef CDAP_KVM_QCOW2WRAPPER_H
#define CDAP_KVM_QCOW2WRAPPER_H

#include <stdint.h>
#include <string>
#include <vector>
#include <map>

using namespace std;

/*
 * QCOW2 Header
 */
typedef struct QCOWHeader
{
    // QFI OxFB
    uint32_t uiMagic;
    // Version: 3
    uint32_t uiVersion;

    // backing file offset
    uint64_t ulBFOffset;
    // size of the string of backing file name with path
    uint32_t uiBFSize;

    // cluster bits
    uint32_t uiClusterBits;
    // qcow2 file size in bytes
    uint64_t ulSize;
    // crypt method, 0 stands for no cryption
    uint32_t uiCryptMethod;

    // the number of entries in L1 table, 8 bytes for every entry
    uint32_t uiL1Size;
    // L1 table location
    uint64_t ulL1TableOffset;

    // reference count table location
    uint64_t ulRefcountTableOffset;
    // how many clusters is occupied by the ref table
    uint32_t uiRefcountTableClusters;

    // number of snapshots
    uint32_t uiSnapshotNumber;
    // Snapshot header location, every snapshot occupy one header
    uint64_t ulSnapshots_offset;

    /* The following fields are only valid for version >= 3 */
    uint64_t ulIncompatibleFeatures;
    uint64_t ulCompatibleFeatures;
    uint64_t ulAutoclearFeatures;

    uint32_t uiRefcountOrder;
    uint32_t uiHeaderLength;
} QCOWHeader;

/*------------------------------------------------------------------------------
 * Class Name: QCOW2Wrapper
 *
 * Description: generic interface based on OO, including basic operation
 * functions related to QEMU virtual file format for virtual machine, i.e.
 * create, read, write
 *
 * ---------------------------------------------------------------------------*/
class QCOW2Wrapper
{
public:
    QCOW2Wrapper();
    ~QCOW2Wrapper();

    /*--------------------------------------------------------------------------
     * Function Name: CreateQCOW2File
     *
     * Description: Create a QCOW2 format image file for Virtual Machine
     *
     * Parameters:
     *     pcFileName[IN]: 		string of QCOW2 file name to be created
     *     lSize[IN]:     		total size in bytes
     *
     * Return:
     *     TRUE:           		created successfully
     *     FALSE:         		failed to create the file
     *------------------------------------------------------------------------*/
    static bool CreateQCOW2File(const char* pcFileName, uint64_t ulSize);

    /*--------------------------------------------------------------------------
     * Function Name: CreateQCOW2SnapFile
     *
     * Description: Create a QCOW2 format snapshot based on the origin backing
     * file
     *
     * Parameters:
     *     pcSnapName[IN]: 		string of QCOW2 snapshot file name to be created
     *     pcBaseFileName[IN]:  string of the based file for the snapshot
     *     lSize[IN]:           total size in bytes
     *
     * Return:
     *     TRUE:           		created successfully
     *     FALSE:         		failed to create the file
     *------------------------------------------------------------------------*/
    static bool CreateQCOW2SnapFile(const char* pcSnapName, const char* pcBaseFileName,
                                    const uint64_t ulSize);

    /*--------------------------------------------------------------------------
     * Function Name: OpenQCOW2File
     *
     * Description: Open QCOW2 format file specified by pszFile, this function
     * must be called before calling ReadQCOW2FileSector/WriteQCOW2FileSector
     *
     * Parameters:
     *     pcFile[IN]: 			string of QCOW2 file name
     *     bBackingFile[IN]:    true: open parent files; not otherwise
     *     bWrite[IN]:          true: read and write; false: read only
     *
     * Return:
     *     TRUE:           		opened successfully
     *     FALSE:         		failed to open the file
     *------------------------------------------------------------------------*/
    bool OpenQCOW2File(const char* pcFile, bool bBackingFile, bool bWrite);

    /*--------------------------------------------------------------------------
     * Function Name: CloseQCOW2File
     *
     * Description: Close QCOW2 format file opened by OpenQCOW2File
     *
     * Parameters:
     *     pcFile[IN]: 			string of QCOW2 file name
     *
     * Return:
     *     void
     *------------------------------------------------------------------------*/
    void CloseQCOW2File();

    /*--------------------------------------------------------------------------
     * Function Name: ReadQCOW2FileSector
     *
     * Description: Read data iSector in sector starting from llSectorOffset and
     * copy data to pucBuf
     *
     * Parameters:
     *     pucBuf[IN]: 			buffer to be saved data
     *	   llSectorOffset[IN]:  offset in sector(512bytes) from the head of the
     * 							QCOW2 file
     *	   iSector[IN]:			the number of sectors should be read
     *
     * Return:
     *     > 0                  sectors were read
     *     = 0                  no data starting from the offset to secotors to read
     *     < 0                  if error happened
     *     -EIO(-5) 			generic Input/Output error
     *	   -ENOMEDIUM(-123)		no media found
     *	   -EINVAL(-22)			Invalid sector number or nb_sectors
     *	   -EACCES(-13)	        Trying to write a read-only device
     *------------------------------------------------------------------------*/
    int ReadQCOW2FileSector(unsigned char* pucBuf,
                            long long llSectorOffset,
                            int iSector);

    /*--------------------------------------------------------------------------
     * Function Name: ReadQCOW2FileByte
     *
     * Description: Read data iByte in byte starting from llByteOffset and copy
     * data to pucBuf
     *
     * Parameters:
     *     pucBuf[IN]: 			buffer to be saved data
     *	   llByteOffset[IN]:    offset from the head of the QCOW2 file
     *	   iByte[IN]:			the number of bytes should be read
     *
     * Return:
     *     > 0                  bytes weare read
     *     = 0                  no data starting from the offset to secotors to read
     *     < 0                  if error happened
     *     -EIO(-5) 			generic Input/Output error
     *	   -ENOMEDIUM(-123)		no media found
     *	   -EINVAL(-22)			Invalid sector number or nb_sectors
     *	   -EACCES(-13)	        Trying to write a read-only device
     *------------------------------------------------------------------------*/
    int ReadQCOW2FileByte(unsigned char* pucBuf,
                          long long llByteOffset,
                          int iByte);
    // Only for SCST module, return length regardless of there is valid data
    int ReadQCOW2FileSectorSCST(unsigned char* pucBuf,
                                long long llSectorOffset,
                                int iSector);
    // Only for SCST module
    int ReadQCOW2FileByteSCST(unsigned char* pucBuf,
                              long long llByteOffset,
                              int iByte);

    /*--------------------------------------------------------------------------
     * Function Name: WriteQCOW2FileSector
     *
     * Description: write all data iSectorLen in pucBuf to file starting from
     * llSectorOffset
     *
     * Parameters:
     *     pucBuf[IN]: 			source buffer including data
     *	   llSectorOffset[IN]:  offset in sector from the head of the QCOW2 file
     *	   iSectorLen[IN]:	    the number of sectors should be wrote
     *
     * Return:
     *     > 0                  sectors were written
     *     < 0                  if error happened
     *     -EIO(-5) 			generic Input/Output error
     *	   -ENOMEDIUM(-123)		no media found
     *	   -EINVAL(-22)			Invalid sector number or nb_sectors
     *	   -EACCES(-13)	        Trying to write a read-only device
     *------------------------------------------------------------------------*/
    int WriteQCOW2FileSector(const unsigned char* pucBuf,
                             long long llSectorOffset,
                             int iSectorLen);

    /*--------------------------------------------------------------------------
     * Function Name: WriteQCOW2FileByte
     *
     * Description: write all data iByteLen in pucBuf to file starting from
     * llSectorOffset
     *
     * Parameters:
     *     pucBuf[IN]: 			source buffer including data
     *	   llByteOffset[IN]:    offset in byte from the head of the QCOW2 file
     *	   iByteLen[IN]:	    the number of bytes should be wrote
     *
     * Return:
     *     > 0                   bytes were written
     *     < 0 if error happened
     *     -EIO(-5) 			generic Input/Output error
     *	   -ENOMEDIUM(-123)		no media found
     *	   -EINVAL(-22)			Invalid sector number or nb_sectors
     *	   -EACCES(-13)	        Trying to write a read-only device
     *------------------------------------------------------------------------*/
    int WriteQCOW2FileByte(const unsigned char* pucBuf,
                           long long llByteOffset,
                           int iByteLen);

    /*--------------------------------------------------------------------------
     * Function Name: RevertToQCOW2Snap
     *
     * Description: revert current VM state to pcSnapName, the coming R/W would
     * be from/to pcRevertFile, which can be started up as VM
     *
     * Parameters:
     *     pcSnapName[IN]: 		snapshot name should be reverted
     *	   pcRevertFile[IN]:    new file for the coming R/W after booting
     *     pcSize[IN]:          image size of QCOW2 file being reverted. i.e. 16G
     *
     * Return:
     *     TRUE:           		restored successfully
     *     FALSE:         		failed to restore to the file
     *------------------------------------------------------------------------*/
    //bool RevertToQCOW2Snap(const char* pcSnapName, const char* pcRevertFile,
    //                        uint64_t ulSize);

    /*--------------------------------------------------------------------------
     * Function Name: MergeSnapshots
     *
     * Description: Merge snapshots starting from pcFirstSnap to pcLastSnap
     *
     * Parameters:
     *     strFirstSnap[IN]: 	first snapshot name
     *     strLastSnap[IN]       last snapshot name
     *     pcSnapName[IN]       the snap name of merging result
     *
     * Return:
     *     TRUE:           		successfully
     *     FALSE:         		failed to merge all snapshots
     *------------------------------------------------------------------------*/
    bool MergeSnapshots(string strFirstSnap, string strLastSnap, const char* pcSnapName = NULL);

    /*--------------------------------------------------------------------------
     * Function Name: DeleteSnapshots
     *
     * Description: delete snapshots starting from pcFirstSnap to pcLastSnap
     * Note: you must first call MergeSnapshots, and then call this api to delete snaps
     *
     * Parameters:
     *     strFirstSnap[IN]: 	first snapshot name
     *     strLastSnap[IN]       last snapshot name
     *
     * Return:
     *     TRUE:           		successfully
     *     FALSE:         		failed to merge all snapshots
     *------------------------------------------------------------------------*/
    bool DeleteSnapshots(string strFirstSnap, string strLastSnap);

    /*--------------------------------------------------------------------------
     * Function Name: IsMergingSnapshot
     *
     * Description: check if storage is merging snapshots
     *
     * Parameters:
     *      None
     *
     * Return:
     *     TRUE:           		Merging
     *     FALSE:         		Not merging
     *------------------------------------------------------------------------*/
    bool IsMergingSnapshot();

    /*--------------------------------------------------------------------------
     * Function Name: GetMergingResult
     *
     * Description: get result for latest merging snapshot
     *
     * Parameters:
     *      None
     *
     * Return:
     *     TRUE:           		Success
     *     FALSE:         		Failure
     *------------------------------------------------------------------------*/
    bool GetMergingResult();

    /*--------------------------------------------------------------------------
     * Function Name: GetSectorNumber
     *
     * Description: get the total sector number in QCOW2 file
     *
     * Parameters:
     *          VOID
     *
     * Return:
     *     sector number in file
     *
     *------------------------------------------------------------------------*/
    unsigned long long GetSectorNumber();

    //unsigned long long GetSectorNumberByFile(const char* pcFile);

    /*
     * Function Name: GetMergingProgress
     *
     * Description: Get merging progress
     *
     * Return: return progress value in float
     *
     */
    float GetMergingProgress();

    /*
     * Function Name: GetMergingTotalLength
     *
     * Description: Get total written data length
     *
     * Return: return progress value in float
     *
     */
    unsigned long long GetMergingTotalLength();

    /*
     * Function Name: GetFileOffsetOfL1L2AndCluster
     *
     * Description: Get file offset of the Cluster location in qcow2 file based on disk offset
     *
     * Parameters:
     *     llDiskOffset[IN]: 	disk offset
     *     pllFileOffset[OUT]:  the file offset of the relevant cluster,
     *
     * Return:
     *     0:           		Success
     *     <0:         		    Failure
     *
     */
    int GetFileOffsetOfL1L2AndCluster(long long llDiskOffset, long long* pllFileOffset);

    /*
     * Function Name: SyncQCOW2File
     *
     * Description: Sync qcow2 file
     *
     * Parameters:
     *     VOID
     *
     * Return:
     *      0:               Success
     *      <0:              Failure
     */
    int SyncQCOW2File(void);

    bool IsOpened(void);

    /*
     * Function Name: IsAllocated, check the current file only.
     *
     * Parameters:
     *      ulOffset:       offset in byte.
     *      iLen:           length in byte.
     * Return:
     *      0: Not-Allocated
     *      1: Allocated
     *     <0: Error
     */
        // return -1 if error happened; 0 not allocated; 1 allocated
    int IsAllocated(uint64_t ulOffset, int iLen = 65536);

    /*
     * Function Name: IsAllocated, check the current file and all the parent files.
     *
     * Parameters:
     *      ulOffset:       offset in byte.
     *      iLen:           length in byte.
     * Return:
     *      0: Not-Allocated
     *      1: Allocated
     *     <0: Errors
     */
    int IsAllocatedAllFile(uint64_t ulOffset, int iLen = 65536);

protected:

    /* merging snaps from iFirstIndex to iLastIndex to temp.qcow2 and change
       the backing file to the backing file of iFirstIndex
     */
    bool RebaseSnapshot(int iFirstIndex, int iLastIndex, string strTemp);

    // create QCOW2 file, called by opened Create APIs
    static bool QemuCreate(const char* pcFileName, const char* pcBaseFileName,
                           const uint64_t ulSize);
    // convert int to char
    void IntToStr(char* pcBuf, int iLength, int iValue);

    // swap bytes for switch from big endian to little endian, or vice versa
    static inline uint32_t SwapInt32(uint32_t uiInt);

    // swap bytes for switch from big endian to little endian, or vice versa
    static inline uint64_t SwapInt64(uint64_t ulInt);

    // pre-allocate big block size when writing data to reduce fie fragmentation
    bool Fallocate(int iFD, uint64_t ulStart, uint64_t ulLength, uint64_t* pulSize);

    // read iLength data from ulOffset in all backing files
    int64_t ReadBackingFiles(uint64_t ulL1Index, int iL2Index, int iClusterIndex,
                             int iLength, unsigned char* pucBuffer);
    // Read iLen bytes from file
    int64_t Readn(int iFD, char* pcBuf, int iLen, uint64_t ulOffset);

    // Write iLen bytes to file
    static int64_t Writen(int iFD, const char* pcBuf, int iLen, uint64_t ulOffset);

    // open a temp file when merging snaps
    bool OpenQCOW2FileTemp(const char* pcFile);

    // close the temp file
    void CloseQCOW2FileTemp();

    // write data function both for snap merging and clone
    int WriteQCOW2FileByte(const unsigned char* pucBuf,
                           long long llByteOffset,
                           int iByteLen, int iFD, QCOWHeader* pstHead, uint64_t& ulMaxOff);
    // swap bytes of every member in the header object
    void SwapHeader(QCOWHeader* pstHeader);

    // write entry in L1/L2 table area
    bool WriteEntry(int iFD, uint64_t ulOffset, uint64_t ulValue);

    // Read entry from L1/L2 table area
    bool ReadEntry(int iFD, uint64_t ulOffset, uint64_t& ulValue);

    // write reference table entry and ref count
    bool UpdateReferenceCount(int iFD, uint64_t& ulClusterCount, uint64_t& ulClusterCountLast, QCOWHeader* pstHeader);

    // write flag when close file
    static bool WriteFlag(int iFD);
    // clear flag
    bool ClearFlag(int iFD);
    // return true if flag exist, vice versa
    bool FlagIsExist(int iFD);
    // get actual cluster count
    int64_t GetClusterCount(int iFD, QCOWHeader* pstHeader);

    void ClearMember();

    // open QCOW2 file independent with this class
    //int OpenQCOW2Indept()
    // get L1 bits
    inline uint64_t GetL1Index(uint64_t ulOffset)
    {
        return (ulOffset >> (m_iClusterBits + (m_iClusterBits - 3)));
    }
    // get L2 bits
    inline int GetL2Index(uint64_t ulOffset)
    {
        return ((ulOffset >> m_iClusterBits) & m_iL2IndexMax);
    }
    // get cluster offset
    inline int GetClusterIndex(uint64_t ulOffset)
    {
        return (ulOffset & (m_iClusterSize - 1));
    }

    static void InitLogger();

    int IsAllocatedAt(uint64_t ulOffset);

    int IsAllocatedAtAllFile(uint64_t ulOffset);


private:
    // file header
    QCOWHeader m_stHeader;
    // file fd
    int m_iFD;
    // headers of backing files
    vector<QCOWHeader> m_vecBFHeader;
    // fds of backing files
    vector<int> m_vecFD;
    // file name for current opened file
    string m_strFileName;
    // state of current file
    bool m_bOpened;
    // merging or not
    bool m_bIsMerging;
    // merging result
    bool m_bMergingResult;
    // cluster size in byte
    static int64_t m_iClusterSize;
    // cluster bits
    static int m_iClusterBits;

    int m_iL2IndexMax;
    // current writing position
    uint64_t m_ulMaxClusterOff;
    // file size
    uint64_t m_ulFileSize;
    // buffer of cluster size using for write snap
    unsigned char* m_pucBuffer;
    // using for ref count, last cluster count
    uint64_t m_ulClusterCountLast;
    // map of snapshot name and it's fd
    map<string, int> m_mapNameToFD;
    // read only or read/write
    bool m_bWrite;

    /*------ members for merging snapshots  --------*/
    // file header
    QCOWHeader m_stHeaderTemp;
    // file fd
    int m_iFDTemp;
    // current writing position
    uint64_t m_ulMaxClusterOffTemp;
    // file size for temp file for merging snap
    uint64_t m_ulFileSizeTemp;
    // index of current merging offset
    uint64_t m_ulMergingIndex;
    // total data size should be merged
    uint64_t m_ulMergingTotalSize;
    // using for ref count, last cluster count
    uint64_t m_ulClusterCountLastTemp;
    /*--------------- END --------------------------*/
};

#endif // CDAP_KVM_QCOW2WRAPPER_H
/*********************EOF******************************************************/
