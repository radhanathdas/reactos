/*
 * This file was machine generated by export
 * Don't edit
 *
 *
*/
#include <internal/symbol.h>
#ifdef __cplusplus
extern "C" {
#endif
void free_page(void);
void get_dma_page(void);
void DbgPrint(void);
void printk(void);
void ExAcquireFastMutex(void);
void ExAcquireFastMutexUnsafe(void);
void ExAcquireResourceExclusive(void);
void ExAcquireResourceExclusiveLite(void);
void ExAcquireResourceSharedLite(void);
void ExAcquireSharedStarveExclusive(void);
void ExAcquireSharedWaitForExclusive(void);
void ExAllocateFromNPagedLookasideList(void);
void ExAllocateFromPagedLookasideList(void);
void ExAllocateFromZone(void);
void ExAllocatePool(void);
void ExAllocatePoolWithQuota(void);
void ExAllocatePoolWithQuotaTag(void);
void ExAllocatePoolWithTag(void);
void ExConvertExclusiveToSharedLite(void);
void ExDeleteNPagedLookasideList(void);
void ExDeletePagedLookasideList(void);
void ExDeleteResource(void);
void ExDeleteResourceLite(void);
void ExExtendZone(void);
void ExFreePool(void);
void ExFreeToNPagedLookasideList(void);
void ExFreeToPagedLookasideList(void);
void ExFreeToZone(void);
void ExGetCurrentResourceThread(void);
void ExGetExclusiveWaiterCount(void);
void ExGetSharedWaiterCount(void);
void ExHookException(void);
void ExInitializeFastMutex(void);
void ExInitializeNPagedLookasideList(void);
void ExInitializePagedLookasideList(void);
void ExInitializeResource(void);
void ExInitializeResourceLite(void);
void ExInitializeSListHead(void);
void ExInitializeWorkItem(void);
void ExInitializeZone(void);
void ExInterlockedAddLargeInteger(void);
void ExInterlockedAddUlong(void);
void ExInterlockedAllocateFromZone(void);
void ExInterlockedDecrementLong(void);
void ExInterlockedExchangeUlong(void);
void ExInterlockedExtendZone(void);
void ExInterlockedFreeToZone(void);
void ExInterlockedIncrementLong(void);
void ExInterlockedInsertHeadList(void);
void ExInterlockedInsertTailList(void);
void ExInterlockedPopEntryList(void);
void ExInterlockedPopEntrySList(void);
void ExInterlockedPushEntryList(void);
void ExInterlockedPushEntrySList(void);
void ExInterlockedRemoveHeadList(void);
void ExIsFullZone(void);
void ExIsObjectInFirstZoneSegment(void);
void ExIsResourceAcquiredExclusiveLite(void);
void ExIsResourceAcquiredSharedLite(void);
void ExLocalTimeToSystemTime(void);
void ExQueryDepthSListHead(void);
void ExQueueWorkItem(void);
void ExRaiseStatus(void);
void ExReinitializeResourceLite(void);
void ExReleaseFastMutex(void);
void ExReleaseFastMutexUnsafe(void);
void ExReleaseResource(void);
void ExReleaseResourceForThread(void);
void ExReleaseResourceForThreadLite(void);
void ExSystemTimeToLocalTime(void);
void ExTryToAcquireFastMutex(void);
void ExTryToAcquireResourceExclusiveLite(void);
void InterlockedCompareExchange(void);
void InterlockedExchange(void);
void InterlockedExchangeAdd(void);
void InterlockedIncrement(void);
void HalAllocateCommonBuffer(void);
void HalAssignSlotResources(void);
void HalExamineMBR(void);
void HalFreeCommonBuffer(void);
void HalGetAdapter(void);
void HalGetBusData(void);
void HalGetBusDataByOffset(void);
void HalGetDmaAlignmentRequirement(void);
void HalGetInterruptVector(void);
void HalQuerySystemInformation(void);
void HalReadDmaCounter(void);
void HalSetBusData(void);
void HalSetBusDataByOffset(void);
void HalTranslateBusAddress(void);
void IoAcquireCancelSpinLock(void);
void IoAllocateAdapterChannel(void);
void IoAllocateController(void);
void IoAllocateErrorLogEntry(void);
void IoAllocateIrp(void);
void IoAllocateMdl(void);
void IoAssignArcName(void);
void IoAssignResources(void);
void IoAttachDevice(void);
void IoAttachDeviceByPointer(void);
void IoAttachDeviceToDeviceStack(void);
void IoBuildAsynchronousFsdRequest(void);
void IoBuildDeviceIoControlRequest(void);
void IoBuildPartialMdl(void);
void IoBuildSynchronousFsdRequest(void);
void IoCallDriver(void);
void IoCancelIrp(void);
void IoCheckShareAccess(void);
void IoCompleteRequest(void);
void IoConnectInterrupt(void);
void IoCreateController(void);
void IoCreateDevice(void);
void IoCreateNotificationEvent(void);
void IoCreateSymbolicLink(void);
void IoCreateSynchronizationEvent(void);
void IoCreateUnprotectedSymbolicLink(void);
void IoDeassignArcName(void);
void IoDeleteController(void);
void IoDeleteDevice(void);
void IoDeleteSymbolicLink(void);
void IoDetachDevice(void);
void IoDisconnectInterrupt(void);
void IoFlushAdapterBuffers(void);
void IoFreeAdapterChannel(void);
void IoFreeController(void);
void IoFreeIrp(void);
void IoFreeMapRegisters(void);
void IoFreeMdl(void);
void IoGetConfigurationInformation(void);
void IoGetCurrentIrpStackLocation(void);
void IoGetCurrentProcess(void);
void IoGetDeviceObjectPointer(void);
void IoGetDeviceToVerify(void);
void IoGetFileObjectGenericMapping(void);
void IoGetFunctionCodeFromCtlCode(void);
void IoGetInitialStack(void);
void IoGetNextIrpStackLocation(void);
void IoGetRelatedDeviceObject(void);
void IoInitializeDpcRequest(void);
void IoInitializeIrp(void);
void IoInitializeTimer(void);
void IoIsErrorUserInduced(void);
void IoIsTotalDeviceFailure(void);
void IoMakeAssociatedIrp(void);
void IoMapTransfer(void);
void IoMarkIrpPending(void);
void IoQueryDeviceDescription(void);
void IoRaiseHardError(void);
void IoRaiseInformationalHardError(void);
void IoReadPartitionTable(void);
void IoRegisterDriverReinitialization(void);
void IoRegisterFileSystem(void);
void IoRegisterShutdownNotification(void);
void IoReleaseCancelSpinLock(void);
void IoRemoveShareAccess(void);
void IoReportResourceUsage(void);
void IoRequestDpc(void);
void IoSetCancelRoutine(void);
void IoSetCompletionRoutine(void);
void IoSetHardErrorOrVerifyDevice(void);
void IoSetNextIrpStackLocation(void);
void IoSetPartitionInformation(void);
void IoSetShareAccess(void);
void IoSizeOfIrp(void);
void IoStartNextPacket(void);
void IoStartNextPacketByKey(void);
void IoStartPacket(void);
void IoStartTimer(void);
void IoStopTimer(void);
void IoUnregisterShutdownNotification(void);
void IoUpdateShareAccess(void);
void IoWriteErrorLogEntry(void);
void IoWritePartitionTable(void);
void KeAcquireSpinLock(void);
void KeAcquireSpinLockAtDpcLevel(void);
void KeBugCheck(void);
void KeBugCheckEx(void);
void KeCancelTimer(void);
void KeClearEvent(void);
void KeDelayExecutionThread(void);
void KeDeregisterBugCheckCallback(void);
void KeEnterCriticalRegion(void);
void KeFlushIoBuffers(void);
void KeGetCurrentIrql(void);
void KeGetCurrentProcessorNumber(void);
void KeGetDcacheFillSize(void);
void KeInitializeCallbackRecord(void);
void KeInitializeDeviceQueue(void);
void KeInitializeDpc(void);
void KeInitializeEvent(void);
void KeInitializeMutex(void);
void KeInitializeSemaphore(void);
void KeInitializeSpinLock(void);
void KeInitializeTimer(void);
void KeInitializeTimerEx(void);
void KeInsertByKeyDeviceQueue(void);
void KeInsertDeviceQueue(void);
void KeInsertQueueDpc(void);
void KeLeaveCriticalRegion(void);
void KeLowerIrql(void);
void KeQueryPerformanceCounter(void);
void KeQuerySystemTime(void);
void KeQueryTickCount(void);
void KeQueryTimeIncrement(void);
void KeRaiseIrql(void);
void KeReadStateEvent(void);
void KeReadStateMutex(void);
void KeReadStateSemaphore(void);
void KeReadStateTimer(void);
void KeRegisterBugCheckCallback(void);
void KeReleaseMutex(void);
void KeReleaseSemaphore(void);
void KeReleaseSpinLock(void);
void KeReleaseSpinLockFromDpcLevel(void);
void KeRemoveByKeyDeviceQueue(void);
void KeRemoveDeviceQueue(void);
void KeRemoveQueueDpc(void);
void KeResetEvent(void);
void KeSetBasePriorityThread(void);
void KeSetEvent(void);
void KeSetPriorityThread(void);
void KeSetTimer(void);
void KeSetTimerEx(void);
void KeStallExecutionProcessor(void);
void KeSynchronizeExecution(void);
void KeWaitForMultipleObjects(void);
void KeWaitForMutexObject(void);
void KeWaitForSingleObject(void);
void MmAllocateContiguousMemory(void);
void MmAllocateNonCachedMemory(void);
void MmBuildMdlForNonPagedPool(void);
void MmCreateMdl(void);
void MmFreeContiguousMemory(void);
void MmFreeNonCachedMemory(void);
void MmGetMdlByteCount(void);
void MmGetMdlByteOffset(void);
void MmGetMdlVirtualAddress(void);
void MmGetPhysicalAddress(void);
void MmGetSystemAddressForMdl(void);
void MmInitializeMdl(void);
void MmIsAddressValid(void);
void MmIsNonPagedSystemAddressValid(void);
void MmIsThisAnNtAsSystem(void);
void MmLockPagableCodeSection(void);
void MmLockPagableDataSection(void);
void MmLockPagableSectionByHandle(void);
void MmMapIoSpace(void);
void MmMapLockedPages(void);
void MmPageEntireDriver(void);
void MmResetDriverPaging(void);
void MmPrepareMdlForReuse(void);
void MmProbeAndLockPages(void);
void MmQuerySystemSize(void);
void MmSizeOfMdl(void);
void MmUnlockPages(void);
void MmUnlockPagableImageSection(void);
void MmUnmapIoSpace(void);
void MmUnmapLockedPages(void);
void ObDereferenceObject(void);
void ObReferenceObjectByHandle(void);
void ObReferenceObjectByPointer(void);
void PsCreateSystemThread(void);
void PsGetCurrentProcess(void);
void PsGetCurrentThread(void);
void PsTerminateSystemThread(void);
void InitializeListHead(void);
void InitializeObjectAttributes(void);
void InsertHeadList(void);
void InsertTailList(void);
void PopEntryList(void);
void PushEntryList(void);
void RemoveEntryList(void);
void RemoveHeadList(void);
void RemoveTailList(void);
void RtlAnsiStringToUnicodeSize(void);
void RtlAnsiStringToUnicodeString(void);
void RtlAppendUnicodeStringToString(void);
void RtlAppendUnicodeToString(void);
void RtlCharToInteger(void);
void RtlCheckRegistryKey(void);
void RtlCompareMemory(void);
void RtlCompareString(void);
void RtlCompareUnicodeString(void);
void RtlConvertLongToLargeInteger(void);
void RtlConvertUlongToLargeInteger(void);
void RtlCopyBytes(void);
void RtlCopyMemory(void);
void RtlCopyString(void);
void RtlCopyUnicodeString(void);
void RtlCreateRegistryKey(void);
void RtlCreateSecurityDescriptor(void);
void RtlDeleteRegistryValue(void);
void RtlEnlargedIntegerMultiply(void);
void RtlEnlargedUnsignedDivide(void);
void RtlEnlargedUnsignedMultiply(void);
void RtlEqualString(void);
void RtlEqualUnicodeString(void);
void RtlExtendedIntegerMultiply(void);
void RtlExtendedLargeIntegerDivide(void);
void RtlExtendedMagicDivide(void);
void RtlFillMemory(void);
void RtlFreeAnsiString(void);
void RtlFreeUnicodeString(void);
void RtlInitAnsiString(void);
void RtlInitString(void);
void RtlInitUnicodeString(void);
void RtlIntegerToUnicodeString(void);
void RtlLargeIntegerAdd(void);
void RtlLargeIntegerAnd(void);
void RtlLargeIntegerArithmeticShift(void);
void RtlLargeIntegerDivide(void);
void RtlLargeIntegerEqualTo(void);
void RtlLargeIntegerEqualToZero(void);
void RtlLargeIntegerGreaterThan(void);
void RtlLargeIntegerGreaterThanOrEqualTo(void);
void RtlLargeIntegerGreaterThanOrEqualToZero(void);
void RtlLargeIntegerGreaterThanZero(void);
void RtlLargeIntegerLessThan(void);
void RtlLargeIntegerLessThanOrEqualTo(void);
void RtlLargeIntegerLessThanZero(void);
void RtlLargeIntegerNegate(void);
void RtlLargeIntegerNotEqualTo(void);
void RtlLargeIntegerShiftLeft(void);
void RtlLargeIntegerShiftRight(void);
void RtlLargeIntegerSubtract(void);
void RtlLengthSecurityDescriptor(void);
void RtlMoveMemory(void);
void RtlQueryRegistryValues(void);
void RtlRetrieveUlong(void);
void RtlRetrieveUshort(void);
void RtlSetDaclSecurityDescriptor(void);
void RtlStoreUlong(void);
void RtlStoreUshort(void);
void RtlTimeFieldsToTime(void);
void RtlTimeToTimeFields(void);
void RtlUnicodeStringToAnsiString(void);
void RtlUnicodeStringToInteger(void);
void RtlUpcaseUnicodeString(void);
void RtlUpperString(void);
void RtlValidSecurityDescriptor(void);
void RtlWriteRegistryValue(void);
void RtlZeroMemory(void);
void SeAccessCheck(void);
void SeAssignSecurity(void);
void SeDeassignSecurity(void);
void SeSinglePrivilegeCheck(void);
void ZwClose(void);
void ZwCreateDirectoryObject(void);
void ZwCreateFile(void);
void ZwCreateKey(void);
void ZwDeleteKey(void);
void ZwEnumerateKey(void);
void ZwEnumerateValueKey(void);
void ZwFlushKey(void);
void ZwMakeTemporaryObject(void);
void ZwMapViewOfSection(void);
void ZwOpenFile(void);
void ZwOpenKey(void);
void ZwOpenSection(void);
void ZwQueryInformationFile(void);
void ZwQueryKey(void);
void ZwQueryValueKey(void);
void ZwReadFile(void);
void ZwSetInformationFile(void);
void ZwSetInformationThread(void);
void ZwSetValueKey(void);
void ZwUnmapViewOfSection(void);
void ZwWriteFile(void);
void sprintf(void);
void wcschr(void);
#ifdef __cplusplus
}
#endif
export symbol_table[]={
{"_free_page",(unsigned int)free_page},
{"_get_dma_page",(unsigned int)get_dma_page},
{"_DbgPrint",(unsigned int)DbgPrint},
{"_printk",(unsigned int)printk},
{"_ExAcquireFastMutex",(unsigned int)ExAcquireFastMutex},
{"_ExAcquireFastMutexUnsafe",(unsigned int)ExAcquireFastMutexUnsafe},
{"_ExAcquireResourceExclusive",(unsigned int)ExAcquireResourceExclusive},
{"_ExAcquireResourceExclusiveLite",(unsigned int)ExAcquireResourceExclusiveLite},
{"_ExAcquireResourceSharedLite",(unsigned int)ExAcquireResourceSharedLite},
{"_ExAcquireSharedStarveExclusive",(unsigned int)ExAcquireSharedStarveExclusive},
{"_ExAcquireSharedWaitForExclusive",(unsigned int)ExAcquireSharedWaitForExclusive},
{"_ExAllocateFromNPagedLookasideList",(unsigned int)ExAllocateFromNPagedLookasideList},
{"_ExAllocateFromPagedLookasideList",(unsigned int)ExAllocateFromPagedLookasideList},
{"_ExAllocateFromZone",(unsigned int)ExAllocateFromZone},
{"_ExAllocatePool",(unsigned int)ExAllocatePool},
{"_ExAllocatePoolWithQuota",(unsigned int)ExAllocatePoolWithQuota},
{"_ExAllocatePoolWithQuotaTag",(unsigned int)ExAllocatePoolWithQuotaTag},
{"_ExAllocatePoolWithTag",(unsigned int)ExAllocatePoolWithTag},
{"_ExConvertExclusiveToSharedLite",(unsigned int)ExConvertExclusiveToSharedLite},
{"_ExDeleteNPagedLookasideList",(unsigned int)ExDeleteNPagedLookasideList},
{"_ExDeletePagedLookasideList",(unsigned int)ExDeletePagedLookasideList},
{"_ExDeleteResource",(unsigned int)ExDeleteResource},
{"_ExDeleteResourceLite",(unsigned int)ExDeleteResourceLite},
{"_ExExtendZone",(unsigned int)ExExtendZone},
{"_ExFreePool",(unsigned int)ExFreePool},
{"_ExFreeToNPagedLookasideList",(unsigned int)ExFreeToNPagedLookasideList},
{"_ExFreeToPagedLookasideList",(unsigned int)ExFreeToPagedLookasideList},
{"_ExFreeToZone",(unsigned int)ExFreeToZone},
{"_ExGetCurrentResourceThread",(unsigned int)ExGetCurrentResourceThread},
{"_ExGetExclusiveWaiterCount",(unsigned int)ExGetExclusiveWaiterCount},
{"_ExGetSharedWaiterCount",(unsigned int)ExGetSharedWaiterCount},
{"_ExHookException",(unsigned int)ExHookException},
{"_ExInitializeFastMutex",(unsigned int)ExInitializeFastMutex},
{"_ExInitializeNPagedLookasideList",(unsigned int)ExInitializeNPagedLookasideList},
{"_ExInitializePagedLookasideList",(unsigned int)ExInitializePagedLookasideList},
{"_ExInitializeResource",(unsigned int)ExInitializeResource},
{"_ExInitializeResourceLite",(unsigned int)ExInitializeResourceLite},
{"_ExInitializeSListHead",(unsigned int)ExInitializeSListHead},
{"_ExInitializeWorkItem",(unsigned int)ExInitializeWorkItem},
{"_ExInitializeZone",(unsigned int)ExInitializeZone},
{"_ExInterlockedAddLargeInteger",(unsigned int)ExInterlockedAddLargeInteger},
{"_ExInterlockedAddUlong",(unsigned int)ExInterlockedAddUlong},
{"_ExInterlockedAllocateFromZone",(unsigned int)ExInterlockedAllocateFromZone},
{"_ExInterlockedDecrementLong",(unsigned int)ExInterlockedDecrementLong},
{"_ExInterlockedExchangeUlong",(unsigned int)ExInterlockedExchangeUlong},
{"_ExInterlockedExtendZone",(unsigned int)ExInterlockedExtendZone},
{"_ExInterlockedFreeToZone",(unsigned int)ExInterlockedFreeToZone},
{"_ExInterlockedIncrementLong",(unsigned int)ExInterlockedIncrementLong},
{"_ExInterlockedInsertHeadList",(unsigned int)ExInterlockedInsertHeadList},
{"_ExInterlockedInsertTailList",(unsigned int)ExInterlockedInsertTailList},
{"_ExInterlockedPopEntryList",(unsigned int)ExInterlockedPopEntryList},
{"_ExInterlockedPopEntrySList",(unsigned int)ExInterlockedPopEntrySList},
{"_ExInterlockedPushEntryList",(unsigned int)ExInterlockedPushEntryList},
{"_ExInterlockedPushEntrySList",(unsigned int)ExInterlockedPushEntrySList},
{"_ExInterlockedRemoveHeadList",(unsigned int)ExInterlockedRemoveHeadList},
{"_ExIsFullZone",(unsigned int)ExIsFullZone},
{"_ExIsObjectInFirstZoneSegment",(unsigned int)ExIsObjectInFirstZoneSegment},
{"_ExIsResourceAcquiredExclusiveLite",(unsigned int)ExIsResourceAcquiredExclusiveLite},
{"_ExIsResourceAcquiredSharedLite",(unsigned int)ExIsResourceAcquiredSharedLite},
{"_ExLocalTimeToSystemTime",(unsigned int)ExLocalTimeToSystemTime},
{"_ExQueryDepthSListHead",(unsigned int)ExQueryDepthSListHead},
{"_ExQueueWorkItem",(unsigned int)ExQueueWorkItem},
{"_ExRaiseStatus",(unsigned int)ExRaiseStatus},
{"_ExReinitializeResourceLite",(unsigned int)ExReinitializeResourceLite},
{"_ExReleaseFastMutex",(unsigned int)ExReleaseFastMutex},
{"_ExReleaseFastMutexUnsafe",(unsigned int)ExReleaseFastMutexUnsafe},
{"_ExReleaseResource",(unsigned int)ExReleaseResource},
{"_ExReleaseResourceForThread",(unsigned int)ExReleaseResourceForThread},
{"_ExReleaseResourceForThreadLite",(unsigned int)ExReleaseResourceForThreadLite},
{"_ExSystemTimeToLocalTime",(unsigned int)ExSystemTimeToLocalTime},
{"_ExTryToAcquireFastMutex",(unsigned int)ExTryToAcquireFastMutex},
{"_ExTryToAcquireResourceExclusiveLite",(unsigned int)ExTryToAcquireResourceExclusiveLite},
{"_InterlockedCompareExchange",(unsigned int)InterlockedCompareExchange},
{"_InterlockedExchange",(unsigned int)InterlockedExchange},
{"_InterlockedExchangeAdd",(unsigned int)InterlockedExchangeAdd},
{"_InterlockedIncrement",(unsigned int)InterlockedIncrement},
{"_HalAllocateCommonBuffer",(unsigned int)HalAllocateCommonBuffer},
{"_HalAssignSlotResources",(unsigned int)HalAssignSlotResources},
{"_HalExamineMBR",(unsigned int)HalExamineMBR},
{"_HalFreeCommonBuffer",(unsigned int)HalFreeCommonBuffer},
{"_HalGetAdapter",(unsigned int)HalGetAdapter},
{"_HalGetBusData",(unsigned int)HalGetBusData},
{"_HalGetBusDataByOffset",(unsigned int)HalGetBusDataByOffset},
{"_HalGetDmaAlignmentRequirement",(unsigned int)HalGetDmaAlignmentRequirement},
{"_HalGetInterruptVector",(unsigned int)HalGetInterruptVector},
{"_HalQuerySystemInformation",(unsigned int)HalQuerySystemInformation},
{"_HalReadDmaCounter",(unsigned int)HalReadDmaCounter},
{"_HalSetBusData",(unsigned int)HalSetBusData},
{"_HalSetBusDataByOffset",(unsigned int)HalSetBusDataByOffset},
{"_HalTranslateBusAddress",(unsigned int)HalTranslateBusAddress},
{"_IoAcquireCancelSpinLock",(unsigned int)IoAcquireCancelSpinLock},
{"_IoAllocateAdapterChannel",(unsigned int)IoAllocateAdapterChannel},
{"_IoAllocateController",(unsigned int)IoAllocateController},
{"_IoAllocateErrorLogEntry",(unsigned int)IoAllocateErrorLogEntry},
{"_IoAllocateIrp",(unsigned int)IoAllocateIrp},
{"_IoAllocateMdl",(unsigned int)IoAllocateMdl},
{"_IoAssignArcName",(unsigned int)IoAssignArcName},
{"_IoAssignResources",(unsigned int)IoAssignResources},
{"_IoAttachDevice",(unsigned int)IoAttachDevice},
{"_IoAttachDeviceByPointer",(unsigned int)IoAttachDeviceByPointer},
{"_IoAttachDeviceToDeviceStack",(unsigned int)IoAttachDeviceToDeviceStack},
{"_IoBuildAsynchronousFsdRequest",(unsigned int)IoBuildAsynchronousFsdRequest},
{"_IoBuildDeviceIoControlRequest",(unsigned int)IoBuildDeviceIoControlRequest},
{"_IoBuildPartialMdl",(unsigned int)IoBuildPartialMdl},
{"_IoBuildSynchronousFsdRequest",(unsigned int)IoBuildSynchronousFsdRequest},
{"_IoCallDriver",(unsigned int)IoCallDriver},
{"_IoCancelIrp",(unsigned int)IoCancelIrp},
{"_IoCheckShareAccess",(unsigned int)IoCheckShareAccess},
{"_IoCompleteRequest",(unsigned int)IoCompleteRequest},
{"_IoConnectInterrupt",(unsigned int)IoConnectInterrupt},
{"_IoCreateController",(unsigned int)IoCreateController},
{"_IoCreateDevice",(unsigned int)IoCreateDevice},
{"_IoCreateNotificationEvent",(unsigned int)IoCreateNotificationEvent},
{"_IoCreateSymbolicLink",(unsigned int)IoCreateSymbolicLink},
{"_IoCreateSynchronizationEvent",(unsigned int)IoCreateSynchronizationEvent},
{"_IoCreateUnprotectedSymbolicLink",(unsigned int)IoCreateUnprotectedSymbolicLink},
{"_IoDeassignArcName",(unsigned int)IoDeassignArcName},
{"_IoDeleteController",(unsigned int)IoDeleteController},
{"_IoDeleteDevice",(unsigned int)IoDeleteDevice},
{"_IoDeleteSymbolicLink",(unsigned int)IoDeleteSymbolicLink},
{"_IoDetachDevice",(unsigned int)IoDetachDevice},
{"_IoDisconnectInterrupt",(unsigned int)IoDisconnectInterrupt},
{"_IoFlushAdapterBuffers",(unsigned int)IoFlushAdapterBuffers},
{"_IoFreeAdapterChannel",(unsigned int)IoFreeAdapterChannel},
{"_IoFreeController",(unsigned int)IoFreeController},
{"_IoFreeIrp",(unsigned int)IoFreeIrp},
{"_IoFreeMapRegisters",(unsigned int)IoFreeMapRegisters},
{"_IoFreeMdl",(unsigned int)IoFreeMdl},
{"_IoGetConfigurationInformation",(unsigned int)IoGetConfigurationInformation},
{"_IoGetCurrentIrpStackLocation",(unsigned int)IoGetCurrentIrpStackLocation},
{"_IoGetCurrentProcess",(unsigned int)IoGetCurrentProcess},
{"_IoGetDeviceObjectPointer",(unsigned int)IoGetDeviceObjectPointer},
{"_IoGetDeviceToVerify",(unsigned int)IoGetDeviceToVerify},
{"_IoGetFileObjectGenericMapping",(unsigned int)IoGetFileObjectGenericMapping},
{"_IoGetFunctionCodeFromCtlCode",(unsigned int)IoGetFunctionCodeFromCtlCode},
{"_IoGetInitialStack",(unsigned int)IoGetInitialStack},
{"_IoGetNextIrpStackLocation",(unsigned int)IoGetNextIrpStackLocation},
{"_IoGetRelatedDeviceObject",(unsigned int)IoGetRelatedDeviceObject},
{"_IoInitializeDpcRequest",(unsigned int)IoInitializeDpcRequest},
{"_IoInitializeIrp",(unsigned int)IoInitializeIrp},
{"_IoInitializeTimer",(unsigned int)IoInitializeTimer},
{"_IoIsErrorUserInduced",(unsigned int)IoIsErrorUserInduced},
{"_IoIsTotalDeviceFailure",(unsigned int)IoIsTotalDeviceFailure},
{"_IoMakeAssociatedIrp",(unsigned int)IoMakeAssociatedIrp},
{"_IoMapTransfer",(unsigned int)IoMapTransfer},
{"_IoMarkIrpPending",(unsigned int)IoMarkIrpPending},
{"_IoQueryDeviceDescription",(unsigned int)IoQueryDeviceDescription},
{"_IoRaiseHardError",(unsigned int)IoRaiseHardError},
{"_IoRaiseInformationalHardError",(unsigned int)IoRaiseInformationalHardError},
{"_IoReadPartitionTable",(unsigned int)IoReadPartitionTable},
{"_IoRegisterDriverReinitialization",(unsigned int)IoRegisterDriverReinitialization},
{"_IoRegisterFileSystem",(unsigned int)IoRegisterFileSystem},
{"_IoRegisterShutdownNotification",(unsigned int)IoRegisterShutdownNotification},
{"_IoReleaseCancelSpinLock",(unsigned int)IoReleaseCancelSpinLock},
{"_IoRemoveShareAccess",(unsigned int)IoRemoveShareAccess},
{"_IoReportResourceUsage",(unsigned int)IoReportResourceUsage},
{"_IoRequestDpc",(unsigned int)IoRequestDpc},
{"_IoSetCancelRoutine",(unsigned int)IoSetCancelRoutine},
{"_IoSetCompletionRoutine",(unsigned int)IoSetCompletionRoutine},
{"_IoSetHardErrorOrVerifyDevice",(unsigned int)IoSetHardErrorOrVerifyDevice},
{"_IoSetNextIrpStackLocation",(unsigned int)IoSetNextIrpStackLocation},
{"_IoSetPartitionInformation",(unsigned int)IoSetPartitionInformation},
{"_IoSetShareAccess",(unsigned int)IoSetShareAccess},
{"_IoSizeOfIrp",(unsigned int)IoSizeOfIrp},
{"_IoStartNextPacket",(unsigned int)IoStartNextPacket},
{"_IoStartNextPacketByKey",(unsigned int)IoStartNextPacketByKey},
{"_IoStartPacket",(unsigned int)IoStartPacket},
{"_IoStartTimer",(unsigned int)IoStartTimer},
{"_IoStopTimer",(unsigned int)IoStopTimer},
{"_IoUnregisterShutdownNotification",(unsigned int)IoUnregisterShutdownNotification},
{"_IoUpdateShareAccess",(unsigned int)IoUpdateShareAccess},
{"_IoWriteErrorLogEntry",(unsigned int)IoWriteErrorLogEntry},
{"_IoWritePartitionTable",(unsigned int)IoWritePartitionTable},
{"_KeAcquireSpinLock",(unsigned int)KeAcquireSpinLock},
{"_KeAcquireSpinLockAtDpcLevel",(unsigned int)KeAcquireSpinLockAtDpcLevel},
{"_KeBugCheck",(unsigned int)KeBugCheck},
{"_KeBugCheckEx",(unsigned int)KeBugCheckEx},
{"_KeCancelTimer",(unsigned int)KeCancelTimer},
{"_KeClearEvent",(unsigned int)KeClearEvent},
{"_KeDelayExecutionThread",(unsigned int)KeDelayExecutionThread},
{"_KeDeregisterBugCheckCallback",(unsigned int)KeDeregisterBugCheckCallback},
{"_KeEnterCriticalRegion",(unsigned int)KeEnterCriticalRegion},
{"_KeFlushIoBuffers",(unsigned int)KeFlushIoBuffers},
{"_KeGetCurrentIrql",(unsigned int)KeGetCurrentIrql},
{"_KeGetCurrentProcessorNumber",(unsigned int)KeGetCurrentProcessorNumber},
{"_KeGetDcacheFillSize",(unsigned int)KeGetDcacheFillSize},
{"_KeInitializeCallbackRecord",(unsigned int)KeInitializeCallbackRecord},
{"_KeInitializeDeviceQueue",(unsigned int)KeInitializeDeviceQueue},
{"_KeInitializeDpc",(unsigned int)KeInitializeDpc},
{"_KeInitializeEvent",(unsigned int)KeInitializeEvent},
{"_KeInitializeMutex",(unsigned int)KeInitializeMutex},
{"_KeInitializeSemaphore",(unsigned int)KeInitializeSemaphore},
{"_KeInitializeSpinLock",(unsigned int)KeInitializeSpinLock},
{"_KeInitializeTimer",(unsigned int)KeInitializeTimer},
{"_KeInitializeTimerEx",(unsigned int)KeInitializeTimerEx},
{"_KeInsertByKeyDeviceQueue",(unsigned int)KeInsertByKeyDeviceQueue},
{"_KeInsertDeviceQueue",(unsigned int)KeInsertDeviceQueue},
{"_KeInsertQueueDpc",(unsigned int)KeInsertQueueDpc},
{"_KeLeaveCriticalRegion",(unsigned int)KeLeaveCriticalRegion},
{"_KeLowerIrql",(unsigned int)KeLowerIrql},
{"_KeQueryPerformanceCounter",(unsigned int)KeQueryPerformanceCounter},
{"_KeQuerySystemTime",(unsigned int)KeQuerySystemTime},
{"_KeQueryTickCount",(unsigned int)KeQueryTickCount},
{"_KeQueryTimeIncrement",(unsigned int)KeQueryTimeIncrement},
{"_KeRaiseIrql",(unsigned int)KeRaiseIrql},
{"_KeReadStateEvent",(unsigned int)KeReadStateEvent},
{"_KeReadStateMutex",(unsigned int)KeReadStateMutex},
{"_KeReadStateSemaphore",(unsigned int)KeReadStateSemaphore},
{"_KeReadStateTimer",(unsigned int)KeReadStateTimer},
{"_KeRegisterBugCheckCallback",(unsigned int)KeRegisterBugCheckCallback},
{"_KeReleaseMutex",(unsigned int)KeReleaseMutex},
{"_KeReleaseSemaphore",(unsigned int)KeReleaseSemaphore},
{"_KeReleaseSpinLock",(unsigned int)KeReleaseSpinLock},
{"_KeReleaseSpinLockFromDpcLevel",(unsigned int)KeReleaseSpinLockFromDpcLevel},
{"_KeRemoveByKeyDeviceQueue",(unsigned int)KeRemoveByKeyDeviceQueue},
{"_KeRemoveDeviceQueue",(unsigned int)KeRemoveDeviceQueue},
{"_KeRemoveQueueDpc",(unsigned int)KeRemoveQueueDpc},
{"_KeResetEvent",(unsigned int)KeResetEvent},
{"_KeSetBasePriorityThread",(unsigned int)KeSetBasePriorityThread},
{"_KeSetEvent",(unsigned int)KeSetEvent},
{"_KeSetPriorityThread",(unsigned int)KeSetPriorityThread},
{"_KeSetTimer",(unsigned int)KeSetTimer},
{"_KeSetTimerEx",(unsigned int)KeSetTimerEx},
{"_KeStallExecutionProcessor",(unsigned int)KeStallExecutionProcessor},
{"_KeSynchronizeExecution",(unsigned int)KeSynchronizeExecution},
{"_KeWaitForMultipleObjects",(unsigned int)KeWaitForMultipleObjects},
{"_KeWaitForMutexObject",(unsigned int)KeWaitForMutexObject},
{"_KeWaitForSingleObject",(unsigned int)KeWaitForSingleObject},
{"_MmAllocateContiguousMemory",(unsigned int)MmAllocateContiguousMemory},
{"_MmAllocateNonCachedMemory",(unsigned int)MmAllocateNonCachedMemory},
{"_MmBuildMdlForNonPagedPool",(unsigned int)MmBuildMdlForNonPagedPool},
{"_MmCreateMdl",(unsigned int)MmCreateMdl},
{"_MmFreeContiguousMemory",(unsigned int)MmFreeContiguousMemory},
{"_MmFreeNonCachedMemory",(unsigned int)MmFreeNonCachedMemory},
{"_MmGetMdlByteCount",(unsigned int)MmGetMdlByteCount},
{"_MmGetMdlByteOffset",(unsigned int)MmGetMdlByteOffset},
{"_MmGetMdlVirtualAddress",(unsigned int)MmGetMdlVirtualAddress},
{"_MmGetPhysicalAddress",(unsigned int)MmGetPhysicalAddress},
{"_MmGetSystemAddressForMdl",(unsigned int)MmGetSystemAddressForMdl},
{"_MmInitializeMdl",(unsigned int)MmInitializeMdl},
{"_MmIsAddressValid",(unsigned int)MmIsAddressValid},
{"_MmIsNonPagedSystemAddressValid",(unsigned int)MmIsNonPagedSystemAddressValid},
{"_MmIsThisAnNtAsSystem",(unsigned int)MmIsThisAnNtAsSystem},
{"_MmLockPagableCodeSection",(unsigned int)MmLockPagableCodeSection},
{"_MmLockPagableDataSection",(unsigned int)MmLockPagableDataSection},
{"_MmLockPagableSectionByHandle",(unsigned int)MmLockPagableSectionByHandle},
{"_MmMapIoSpace",(unsigned int)MmMapIoSpace},
{"_MmMapLockedPages",(unsigned int)MmMapLockedPages},
{"_MmPageEntireDriver",(unsigned int)MmPageEntireDriver},
{"_MmResetDriverPaging",(unsigned int)MmResetDriverPaging},
{"_MmPrepareMdlForReuse",(unsigned int)MmPrepareMdlForReuse},
{"_MmProbeAndLockPages",(unsigned int)MmProbeAndLockPages},
{"_MmQuerySystemSize",(unsigned int)MmQuerySystemSize},
{"_MmSizeOfMdl",(unsigned int)MmSizeOfMdl},
{"_MmUnlockPages",(unsigned int)MmUnlockPages},
{"_MmUnlockPagableImageSection",(unsigned int)MmUnlockPagableImageSection},
{"_MmUnmapIoSpace",(unsigned int)MmUnmapIoSpace},
{"_MmUnmapLockedPages",(unsigned int)MmUnmapLockedPages},
{"_ObDereferenceObject",(unsigned int)ObDereferenceObject},
{"_ObReferenceObjectByHandle",(unsigned int)ObReferenceObjectByHandle},
{"_ObReferenceObjectByPointer",(unsigned int)ObReferenceObjectByPointer},
{"_PsCreateSystemThread",(unsigned int)PsCreateSystemThread},
{"_PsGetCurrentProcess",(unsigned int)PsGetCurrentProcess},
{"_PsGetCurrentThread",(unsigned int)PsGetCurrentThread},
{"_PsTerminateSystemThread",(unsigned int)PsTerminateSystemThread},
{"_InitializeListHead",(unsigned int)InitializeListHead},
{"_InitializeObjectAttributes",(unsigned int)InitializeObjectAttributes},
{"_InsertHeadList",(unsigned int)InsertHeadList},
{"_InsertTailList",(unsigned int)InsertTailList},
{"_PopEntryList",(unsigned int)PopEntryList},
{"_PushEntryList",(unsigned int)PushEntryList},
{"_RemoveEntryList",(unsigned int)RemoveEntryList},
{"_RemoveHeadList",(unsigned int)RemoveHeadList},
{"_RemoveTailList",(unsigned int)RemoveTailList},
{"_RtlAnsiStringToUnicodeSize",(unsigned int)RtlAnsiStringToUnicodeSize},
{"_RtlAnsiStringToUnicodeString",(unsigned int)RtlAnsiStringToUnicodeString},
{"_RtlAppendUnicodeStringToString",(unsigned int)RtlAppendUnicodeStringToString},
{"_RtlAppendUnicodeToString",(unsigned int)RtlAppendUnicodeToString},
{"_RtlCharToInteger",(unsigned int)RtlCharToInteger},
{"_RtlCheckRegistryKey",(unsigned int)RtlCheckRegistryKey},
{"_RtlCompareMemory",(unsigned int)RtlCompareMemory},
{"_RtlCompareString",(unsigned int)RtlCompareString},
{"_RtlCompareUnicodeString",(unsigned int)RtlCompareUnicodeString},
{"_RtlConvertLongToLargeInteger",(unsigned int)RtlConvertLongToLargeInteger},
{"_RtlConvertUlongToLargeInteger",(unsigned int)RtlConvertUlongToLargeInteger},
{"_RtlCopyBytes",(unsigned int)RtlCopyBytes},
{"_RtlCopyMemory",(unsigned int)RtlCopyMemory},
{"_RtlCopyString",(unsigned int)RtlCopyString},
{"_RtlCopyUnicodeString",(unsigned int)RtlCopyUnicodeString},
{"_RtlCreateRegistryKey",(unsigned int)RtlCreateRegistryKey},
{"_RtlCreateSecurityDescriptor",(unsigned int)RtlCreateSecurityDescriptor},
{"_RtlDeleteRegistryValue",(unsigned int)RtlDeleteRegistryValue},
{"_RtlEnlargedIntegerMultiply",(unsigned int)RtlEnlargedIntegerMultiply},
{"_RtlEnlargedUnsignedDivide",(unsigned int)RtlEnlargedUnsignedDivide},
{"_RtlEnlargedUnsignedMultiply",(unsigned int)RtlEnlargedUnsignedMultiply},
{"_RtlEqualString",(unsigned int)RtlEqualString},
{"_RtlEqualUnicodeString",(unsigned int)RtlEqualUnicodeString},
{"_RtlExtendedIntegerMultiply",(unsigned int)RtlExtendedIntegerMultiply},
{"_RtlExtendedLargeIntegerDivide",(unsigned int)RtlExtendedLargeIntegerDivide},
{"_RtlExtendedMagicDivide",(unsigned int)RtlExtendedMagicDivide},
{"_RtlFillMemory",(unsigned int)RtlFillMemory},
{"_RtlFreeAnsiString",(unsigned int)RtlFreeAnsiString},
{"_RtlFreeUnicodeString",(unsigned int)RtlFreeUnicodeString},
{"_RtlInitAnsiString",(unsigned int)RtlInitAnsiString},
{"_RtlInitString",(unsigned int)RtlInitString},
{"_RtlInitUnicodeString",(unsigned int)RtlInitUnicodeString},
{"_RtlIntegerToUnicodeString",(unsigned int)RtlIntegerToUnicodeString},
{"_RtlLargeIntegerAdd",(unsigned int)RtlLargeIntegerAdd},
{"_RtlLargeIntegerAnd",(unsigned int)RtlLargeIntegerAnd},
{"_RtlLargeIntegerArithmeticShift",(unsigned int)RtlLargeIntegerArithmeticShift},
{"_RtlLargeIntegerDivide",(unsigned int)RtlLargeIntegerDivide},
{"_RtlLargeIntegerEqualTo",(unsigned int)RtlLargeIntegerEqualTo},
{"_RtlLargeIntegerEqualToZero",(unsigned int)RtlLargeIntegerEqualToZero},
{"_RtlLargeIntegerGreaterThan",(unsigned int)RtlLargeIntegerGreaterThan},
{"_RtlLargeIntegerGreaterThanOrEqualTo",(unsigned int)RtlLargeIntegerGreaterThanOrEqualTo},
{"_RtlLargeIntegerGreaterThanOrEqualToZero",(unsigned int)RtlLargeIntegerGreaterThanOrEqualToZero},
{"_RtlLargeIntegerGreaterThanZero",(unsigned int)RtlLargeIntegerGreaterThanZero},
{"_RtlLargeIntegerLessThan",(unsigned int)RtlLargeIntegerLessThan},
{"_RtlLargeIntegerLessThanOrEqualTo",(unsigned int)RtlLargeIntegerLessThanOrEqualTo},
{"_RtlLargeIntegerLessThanZero",(unsigned int)RtlLargeIntegerLessThanZero},
{"_RtlLargeIntegerNegate",(unsigned int)RtlLargeIntegerNegate},
{"_RtlLargeIntegerNotEqualTo",(unsigned int)RtlLargeIntegerNotEqualTo},
{"_RtlLargeIntegerShiftLeft",(unsigned int)RtlLargeIntegerShiftLeft},
{"_RtlLargeIntegerShiftRight",(unsigned int)RtlLargeIntegerShiftRight},
{"_RtlLargeIntegerSubtract",(unsigned int)RtlLargeIntegerSubtract},
{"_RtlLengthSecurityDescriptor",(unsigned int)RtlLengthSecurityDescriptor},
{"_RtlMoveMemory",(unsigned int)RtlMoveMemory},
{"_RtlQueryRegistryValues",(unsigned int)RtlQueryRegistryValues},
{"_RtlRetrieveUlong",(unsigned int)RtlRetrieveUlong},
{"_RtlRetrieveUshort",(unsigned int)RtlRetrieveUshort},
{"_RtlSetDaclSecurityDescriptor",(unsigned int)RtlSetDaclSecurityDescriptor},
{"_RtlStoreUlong",(unsigned int)RtlStoreUlong},
{"_RtlStoreUshort",(unsigned int)RtlStoreUshort},
{"_RtlTimeFieldsToTime",(unsigned int)RtlTimeFieldsToTime},
{"_RtlTimeToTimeFields",(unsigned int)RtlTimeToTimeFields},
{"_RtlUnicodeStringToAnsiString",(unsigned int)RtlUnicodeStringToAnsiString},
{"_RtlUnicodeStringToInteger",(unsigned int)RtlUnicodeStringToInteger},
{"_RtlUpcaseUnicodeString",(unsigned int)RtlUpcaseUnicodeString},
{"_RtlUpperString",(unsigned int)RtlUpperString},
{"_RtlValidSecurityDescriptor",(unsigned int)RtlValidSecurityDescriptor},
{"_RtlWriteRegistryValue",(unsigned int)RtlWriteRegistryValue},
{"_RtlZeroMemory",(unsigned int)RtlZeroMemory},
{"_SeAccessCheck",(unsigned int)SeAccessCheck},
{"_SeAssignSecurity",(unsigned int)SeAssignSecurity},
{"_SeDeassignSecurity",(unsigned int)SeDeassignSecurity},
{"_SeSinglePrivilegeCheck",(unsigned int)SeSinglePrivilegeCheck},
{"_ZwClose",(unsigned int)ZwClose},
{"_ZwCreateDirectoryObject",(unsigned int)ZwCreateDirectoryObject},
{"_ZwCreateFile",(unsigned int)ZwCreateFile},
{"_ZwCreateKey",(unsigned int)ZwCreateKey},
{"_ZwDeleteKey",(unsigned int)ZwDeleteKey},
{"_ZwEnumerateKey",(unsigned int)ZwEnumerateKey},
{"_ZwEnumerateValueKey",(unsigned int)ZwEnumerateValueKey},
{"_ZwFlushKey",(unsigned int)ZwFlushKey},
{"_ZwMakeTemporaryObject",(unsigned int)ZwMakeTemporaryObject},
{"_ZwMapViewOfSection",(unsigned int)ZwMapViewOfSection},
{"_ZwOpenFile",(unsigned int)ZwOpenFile},
{"_ZwOpenKey",(unsigned int)ZwOpenKey},
{"_ZwOpenSection",(unsigned int)ZwOpenSection},
{"_ZwQueryInformationFile",(unsigned int)ZwQueryInformationFile},
{"_ZwQueryKey",(unsigned int)ZwQueryKey},
{"_ZwQueryValueKey",(unsigned int)ZwQueryValueKey},
{"_ZwReadFile",(unsigned int)ZwReadFile},
{"_ZwSetInformationFile",(unsigned int)ZwSetInformationFile},
{"_ZwSetInformationThread",(unsigned int)ZwSetInformationThread},
{"_ZwSetValueKey",(unsigned int)ZwSetValueKey},
{"_ZwUnmapViewOfSection",(unsigned int)ZwUnmapViewOfSection},
{"_ZwWriteFile",(unsigned int)ZwWriteFile},
{"_sprintf",(unsigned int)sprintf},
{"_wcschr",(unsigned int)wcschr},
{NULL,NULL},
};
