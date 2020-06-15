#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceFiosArchiveGetDecompressorThreadCount();
void sceFiosArchiveGetMountBufferSize();
void sceFiosArchiveGetMountBufferSizeSync();
void sceFiosArchiveMount();
void sceFiosArchiveMountSync();
void sceFiosArchiveMountWithOrder();
void sceFiosArchiveMountWithOrderSync();
void sceFiosArchiveSetDecompressorThreadCount();
void sceFiosArchiveUnmount();
void sceFiosArchiveUnmountSync();
void sceFiosCacheContainsFileRangeSync();
void sceFiosCacheContainsFileSync();
void sceFiosCacheFlushFileRangeSync();
void sceFiosCacheFlushFileSync();
void sceFiosCacheFlushSync();
void sceFiosCachePrefetchFH();
void sceFiosCachePrefetchFHRange();
void sceFiosCachePrefetchFHRangeSync();
void sceFiosCachePrefetchFHSync();
void sceFiosCachePrefetchFile();
void sceFiosCachePrefetchFileRange();
void sceFiosCachePrefetchFileRangeSync();
void sceFiosCachePrefetchFileSync();
void sceFiosCancelAllOps();
void sceFiosClearTimeStamps();
void sceFiosCloseAllFiles();
void sceFiosDateFromComponents();
void sceFiosDateGetCurrent();
void sceFiosDateToComponents();
void sceFiosDeallocatePassthruFH();
void sceFiosDebugDumpDate();
void sceFiosDebugDumpDH();
void sceFiosDebugDumpError();
void sceFiosDebugDumpFH();
void sceFiosDebugDumpOp();
void sceFiosDelete();
void sceFiosDeleteSync();
void sceFiosDHClose();
void sceFiosDHCloseSync();
void sceFiosDHGetPath();
void sceFiosDHOpen();
void sceFiosDHOpenSync();
void sceFiosDHRead();
void sceFiosDHReadSync();
void sceFiosDirectoryCreate();
void sceFiosDirectoryCreateSync();
void sceFiosDirectoryCreateWithMode();
void sceFiosDirectoryCreateWithModeSync();
void sceFiosDirectoryDelete();
void sceFiosDirectoryDeleteSync();
void sceFiosDirectoryExists();
void sceFiosDirectoryExistsSync();
void sceFiosDLLInitialize();
void sceFiosDLLTerminate();
void sceFiosExists();
void sceFiosExistsSync();
void sceFiosFHClose();
void sceFiosFHCloseSync();
void sceFiosFHGetOpenParams();
void sceFiosFHGetPath();
void sceFiosFHGetSize();
void sceFiosFHOpen();
void sceFiosFHOpenSync();
void sceFiosFHOpenWithMode();
void sceFiosFHOpenWithModeSync();
void sceFiosFHPread();
void sceFiosFHPreadSync();
void sceFiosFHPreadv();
void sceFiosFHPreadvSync();
void sceFiosFHPwrite();
void sceFiosFHPwriteSync();
void sceFiosFHPwritev();
void sceFiosFHPwritevSync();
void sceFiosFHRead();
void sceFiosFHReadSync();
void sceFiosFHReadv();
void sceFiosFHReadvSync();
void sceFiosFHSeek();
void sceFiosFHStat();
void sceFiosFHStatSync();
void sceFiosFHSync();
void sceFiosFHSyncSync();
void sceFiosFHTell();
void sceFiosFHToFileno();
void sceFiosFHTruncate();
void sceFiosFHTruncateSync();
void sceFiosFHWrite();
void sceFiosFHWriteSync();
void sceFiosFHWritev();
void sceFiosFHWritevSync();
void sceFiosFileDelete();
void sceFiosFileDeleteSync();
void sceFiosFileExists();
void sceFiosFileExistsSync();
void sceFiosFileGetSize();
void sceFiosFileGetSizeSync();
void sceFiosFilenoToFH();
void sceFiosFileRead();
void sceFiosFileReadSync();
void sceFiosFileTruncate();
void sceFiosFileTruncateSync();
void sceFiosFileWrite();
void sceFiosFileWriteSync();
void sceFiosGetAllDHs();
void sceFiosGetAllFHs();
void sceFiosGetAllOps();
void sceFiosGetDefaultOpAttr();
void sceFiosGetGlobalDefaultOpAttr();
void sceFiosGetSuspendCount();
void sceFiosGetThreadDefaultOpAttr();
void sceFiosInitialize();
void sceFiosIOFilterAdd();
void sceFiosIOFilterCache();
void sceFiosIOFilterGetInfo();
void sceFiosIOFilterPsarcDearchiver();
void sceFiosIOFilterRemove();
void sceFiosIsIdle();
void sceFiosIsInitialized();
void sceFiosIsSuspended();
void sceFiosIsValidHandle();
void sceFiosOpCancel();
void sceFiosOpDelete();
void sceFiosOpGetActualCount();
void sceFiosOpGetAttr();
void sceFiosOpGetBuffer();
void sceFiosOpGetError();
void sceFiosOpGetOffset();
void sceFiosOpGetPath();
void sceFiosOpGetRequestCount();
void sceFiosOpIsCancelled();
void sceFiosOpIsDone();
void sceFiosOpReschedule();
void sceFiosOpRescheduleWithPriority();
void sceFiosOpSetBuffer();
void sceFiosOpSyncWait();
void sceFiosOpSyncWaitForIO();
void sceFiosOpWait();
void sceFiosOpWaitUntil();
void sceFiosOverlayAdd();
void sceFiosOverlayGetInfo();
void sceFiosOverlayGetList();
void sceFiosOverlayModify();
void sceFiosOverlayRemove();
void sceFiosOverlayResolveSync();
void sceFiosPathcmp();
void sceFiosPathncmp();
void sceFiosPathNormalize();
void sceFiosPrintf();
void sceFiosPrintTimeStamps();
void sceFiosRename();
void sceFiosRenameSync();
void sceFiosResolve();
void sceFiosResolveSync();
void sceFiosResume();
void sceFiosSaveTimeStamp();
void sceFiosSetGlobalDefaultOpAttr();
void sceFiosSetThreadDefaultOpAttr();
void sceFiosShutdownAndCancelOps();
void sceFiosStat();
void sceFiosStatSync();
void sceFiosSuspend();
void sceFiosTerminate();
void sceFiosTimeGetCurrent();
void sceFiosTimeIntervalFromNanoseconds();
void sceFiosTimeIntervalToNanoseconds();
void sceFiosTraceTimestamp();
void sceFiosUpdateParameters();
void sceFiosVprintf();