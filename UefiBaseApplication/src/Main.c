#include <stdio.h>
#include <stdlib.h>
#include <Uefi.h>

EFI_STATUS
EFIAPI
UefiMain(
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE   *SystemTable
  );


int main(int argc, char *argv[])
{
	return UefiMain(NULL, NULL);
}