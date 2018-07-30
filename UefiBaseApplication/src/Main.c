#include <stdio.h>
#include <stdlib.h>
#include <PiDxe.h>
#include <Library/BaseMemoryLib.h>

EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg0 (
  VOID
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}


/**
  Place holder function until all the Boot Services and Runtime Services are
  available.

  @param  Arg1                   Undefined

  @return EFI_NOT_AVAILABLE_YET

**/
EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg1 (
  UINTN Arg1
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}


/**
  Place holder function until all the Boot Services and Runtime Services are available.

  @param  Arg1                   Undefined
  @param  Arg2                   Undefined

  @return EFI_NOT_AVAILABLE_YET

**/
EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg2 (
  UINTN Arg1,
  UINTN Arg2
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}


/**
  Place holder function until all the Boot Services and Runtime Services are available.

  @param  Arg1                   Undefined
  @param  Arg2                   Undefined
  @param  Arg3                   Undefined

  @return EFI_NOT_AVAILABLE_YET

**/
EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg3 (
  UINTN Arg1,
  UINTN Arg2,
  UINTN Arg3
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}


/**
  Place holder function until all the Boot Services and Runtime Services are available.

  @param  Arg1                   Undefined
  @param  Arg2                   Undefined
  @param  Arg3                   Undefined
  @param  Arg4                   Undefined

  @return EFI_NOT_AVAILABLE_YET

**/
EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg4 (
  UINTN Arg1,
  UINTN Arg2,
  UINTN Arg3,
  UINTN Arg4
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}


/**
  Place holder function until all the Boot Services and Runtime Services are available.

  @param  Arg1                   Undefined
  @param  Arg2                   Undefined
  @param  Arg3                   Undefined
  @param  Arg4                   Undefined
  @param  Arg5                   Undefined

  @return EFI_NOT_AVAILABLE_YET

**/
EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg5 (
  UINTN Arg1,
  UINTN Arg2,
  UINTN Arg3,
  UINTN Arg4,
  UINTN Arg5
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}

EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArg6 (
  UINTN Arg1,
  UINTN Arg2,
  UINTN Arg3,
  UINTN Arg4,
  UINTN Arg5,
  UINTN Arg6
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}

EFI_STATUS
EFIAPI
CoreEfiNotAvailableYetArgMulti (
  UINTN Arg1,
  ...
  )
{
  //
  // This function should never be executed.  If it does, then the architectural protocols
  // have not been designed correctly.  The CpuBreakpoint () is commented out for now until the
  // DXE Core and all the Architectural Protocols are complete.
  //

  return EFI_NOT_AVAILABLE_YET;
}

EFI_STATUS
EFIAPI
CoreAllocatePages(
IN  EFI_ALLOCATE_TYPE     Type,
IN  EFI_MEMORY_TYPE       MemoryType,
IN  UINTN                 NumberOfPages,
OUT EFI_PHYSICAL_ADDRESS  *Memory
)
{
	VOID *data;

	data = malloc(EFI_PAGES_TO_SIZE(NumberOfPages));
	if (data == NULL)
	{
		return EFI_OUT_OF_RESOURCES;
	}
	else
	{
		*Memory = (EFI_PHYSICAL_ADDRESS)data;
		return EFI_SUCCESS;
	}
}

EFI_STATUS
EFIAPI
CoreFreePages(
IN EFI_PHYSICAL_ADDRESS  Memory,
IN UINTN                 NumberOfPages
)
{
	free((VOID*)Memory);
	return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
CoreAllocatePool(
IN EFI_MEMORY_TYPE  PoolType,
IN UINTN            Size,
OUT VOID            **Buffer
)
{
	VOID *data;

	data = malloc(Size);
	if (data == NULL)
	{
		return EFI_OUT_OF_RESOURCES;
	}
	else
	{
		*Buffer = data;
		return EFI_SUCCESS;
	}
}

EFI_STATUS
EFIAPI
CoreFreePool(
IN VOID  *Buffer
)
{
	free(Buffer);
	return EFI_SUCCESS;
}

EFI_BOOT_SERVICES mBootServices = {
  {
    EFI_BOOT_SERVICES_SIGNATURE,                                                          // Signature
    EFI_BOOT_SERVICES_REVISION,                                                           // Revision
    sizeof (EFI_BOOT_SERVICES),                                                           // HeaderSize
    0,                                                                                    // CRC32
    0                                                                                     // Reserved
  },
  (EFI_RAISE_TPL)                               CoreEfiNotAvailableYetArg1,               // RaiseTPL
  (EFI_RESTORE_TPL)                             CoreEfiNotAvailableYetArg1,               // RestoreTPL
  (EFI_ALLOCATE_PAGES)                          CoreAllocatePages,                        // AllocatePages
  (EFI_FREE_PAGES)                              CoreFreePages,                            // FreePages
  (EFI_GET_MEMORY_MAP)                          CoreEfiNotAvailableYetArg5,               // GetMemoryMap
  (EFI_ALLOCATE_POOL)                           CoreAllocatePool,                         // AllocatePool
  (EFI_FREE_POOL)                               CoreFreePool,                             // FreePool
  (EFI_CREATE_EVENT)                            CoreEfiNotAvailableYetArg5,               // CreateEvent
  (EFI_SET_TIMER)                               CoreEfiNotAvailableYetArg3,               // SetTimer
  (EFI_WAIT_FOR_EVENT)                          CoreEfiNotAvailableYetArg3,               // WaitForEvent
  (EFI_SIGNAL_EVENT)                            CoreEfiNotAvailableYetArg1,               // SignalEvent
  (EFI_CLOSE_EVENT)                             CoreEfiNotAvailableYetArg1,               // CloseEvent
  (EFI_CHECK_EVENT)                             CoreEfiNotAvailableYetArg1,               // CheckEvent
  (EFI_INSTALL_PROTOCOL_INTERFACE)              CoreEfiNotAvailableYetArg4,               // InstallProtocolInterface
  (EFI_REINSTALL_PROTOCOL_INTERFACE)            CoreEfiNotAvailableYetArg4,               // ReinstallProtocolInterface
  (EFI_UNINSTALL_PROTOCOL_INTERFACE)            CoreEfiNotAvailableYetArg3,               // UninstallProtocolInterface
  (EFI_HANDLE_PROTOCOL)                         CoreEfiNotAvailableYetArg3,               // HandleProtocol
  (VOID *)                                      NULL,                                     // Reserved
  (EFI_REGISTER_PROTOCOL_NOTIFY)                CoreEfiNotAvailableYetArg3,               // RegisterProtocolNotify
  (EFI_LOCATE_HANDLE)                           CoreEfiNotAvailableYetArg5,               // LocateHandle
  (EFI_LOCATE_DEVICE_PATH)                      CoreEfiNotAvailableYetArg3,               // LocateDevicePath
  (EFI_INSTALL_CONFIGURATION_TABLE)             CoreEfiNotAvailableYetArg2,               // InstallConfigurationTable
  (EFI_IMAGE_LOAD)                              CoreEfiNotAvailableYetArg6,               // LoadImage
  (EFI_IMAGE_START)                             CoreEfiNotAvailableYetArg3,               // StartImage
  (EFI_EXIT)                                    CoreEfiNotAvailableYetArg4,               // Exit
  (EFI_IMAGE_UNLOAD)                            CoreEfiNotAvailableYetArg1,               // UnloadImage
  (EFI_EXIT_BOOT_SERVICES)                      CoreEfiNotAvailableYetArg2,               // ExitBootServices
  (EFI_GET_NEXT_MONOTONIC_COUNT)                CoreEfiNotAvailableYetArg1,               // GetNextMonotonicCount
  (EFI_STALL)                                   CoreEfiNotAvailableYetArg1,               // Stall
  (EFI_SET_WATCHDOG_TIMER)                      CoreEfiNotAvailableYetArg4,               // SetWatchdogTimer
  (EFI_CONNECT_CONTROLLER)                      CoreEfiNotAvailableYetArg4,               // ConnectController
  (EFI_DISCONNECT_CONTROLLER)                   CoreEfiNotAvailableYetArg3,               // DisconnectController
  (EFI_OPEN_PROTOCOL)                           CoreEfiNotAvailableYetArg6,               // OpenProtocol
  (EFI_CLOSE_PROTOCOL)                          CoreEfiNotAvailableYetArg4,               // CloseProtocol
  (EFI_OPEN_PROTOCOL_INFORMATION)               CoreEfiNotAvailableYetArg4,               // OpenProtocolInformation
  (EFI_PROTOCOLS_PER_HANDLE)                    CoreEfiNotAvailableYetArg3,               // ProtocolsPerHandle
  (EFI_LOCATE_HANDLE_BUFFER)                    CoreEfiNotAvailableYetArg5,               // LocateHandleBuffer
  (EFI_LOCATE_PROTOCOL)                         CoreEfiNotAvailableYetArg3,               // LocateProtocol
  (EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES)    CoreEfiNotAvailableYetArgMulti,           // InstallMultipleProtocolInterfaces
  (EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES)  CoreEfiNotAvailableYetArgMulti,           // UninstallMultipleProtocolInterfaces
  (EFI_CALCULATE_CRC32)                         CoreEfiNotAvailableYetArg3,               // CalculateCrc32
  (EFI_COPY_MEM)                                CopyMem,                                  // CopyMem
  (EFI_SET_MEM)                                 SetMem,                                   // SetMem
  (EFI_CREATE_EVENT_EX)                         CoreEfiNotAvailableYetArg6                // CreateEventEx
};

EFI_SYSTEM_TABLE mEfiSystemTableTemplate = {
  {
    EFI_SYSTEM_TABLE_SIGNATURE,                                           // Signature
    EFI_SYSTEM_TABLE_REVISION,                                            // Revision
    sizeof (EFI_SYSTEM_TABLE),                                            // HeaderSize
    0,                                                                    // CRC32
    0                                                                     // Reserved
  },
  NULL,                                                                   // FirmwareVendor
  0,                                                                      // FirmwareRevision
  NULL,                                                                   // ConsoleInHandle
  NULL,                                                                   // ConIn
  NULL,                                                                   // ConsoleOutHandle
  NULL,                                                                   // ConOut
  NULL,                                                                   // StandardErrorHandle
  NULL,                                                                   // StdErr
  NULL,                                                                   // RuntimeServices
  &mBootServices,                                                         // BootServices
  0,                                                                      // NumberOfConfigurationTableEntries
  NULL                                                                    // ConfigurationTable
};

EFI_RUNTIME_SERVICES mEfiRuntimeServicesTableTemplate = {
  {
    EFI_RUNTIME_SERVICES_SIGNATURE,                               // Signature
    EFI_RUNTIME_SERVICES_REVISION,                                // Revision
    sizeof (EFI_RUNTIME_SERVICES),                                // HeaderSize
    0,                                                            // CRC32
    0                                                             // Reserved
  },
  (EFI_GET_TIME)                    CoreEfiNotAvailableYetArg2,   // GetTime
  (EFI_SET_TIME)                    CoreEfiNotAvailableYetArg1,   // SetTime
  (EFI_GET_WAKEUP_TIME)             CoreEfiNotAvailableYetArg3,   // GetWakeupTime
  (EFI_SET_WAKEUP_TIME)             CoreEfiNotAvailableYetArg2,   // SetWakeupTime
  (EFI_SET_VIRTUAL_ADDRESS_MAP)     CoreEfiNotAvailableYetArg4,   // SetVirtualAddressMap
  (EFI_CONVERT_POINTER)             CoreEfiNotAvailableYetArg2,   // ConvertPointer
  (EFI_GET_VARIABLE)                CoreEfiNotAvailableYetArg5,   // GetVariable
  (EFI_GET_NEXT_VARIABLE_NAME)      CoreEfiNotAvailableYetArg3,   // GetNextVariableName
  (EFI_SET_VARIABLE)                CoreEfiNotAvailableYetArg5,   // SetVariable
  (EFI_GET_NEXT_HIGH_MONO_COUNT)    CoreEfiNotAvailableYetArg1,   // GetNextHighMonotonicCount
  (EFI_RESET_SYSTEM)                CoreEfiNotAvailableYetArg4,   // ResetSystem
  (EFI_UPDATE_CAPSULE)              CoreEfiNotAvailableYetArg3,   // UpdateCapsule
  (EFI_QUERY_CAPSULE_CAPABILITIES)  CoreEfiNotAvailableYetArg4,   // QueryCapsuleCapabilities
  (EFI_QUERY_VARIABLE_INFO)         CoreEfiNotAvailableYetArg4    // QueryVariableInfo
};

EFI_SYSTEM_TABLE      *gDxeCoreST = &mEfiSystemTableTemplate;
EFI_RUNTIME_SERVICES  *gDxeCoreRT = &mEfiRuntimeServicesTableTemplate;
EFI_HANDLE            gDxeCoreImageHandle = NULL;

EFI_STATUS
EFIAPI
UefiMain(
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );

int main(int argc, char *argv[])
{
	EFI_STATUS Status;

	gDxeCoreST->RuntimeServices = gDxeCoreRT;

	Status = UefiMain(gDxeCoreImageHandle, gDxeCoreST);

	return Status;
}
