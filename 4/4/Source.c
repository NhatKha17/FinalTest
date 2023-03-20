#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
DWORD WINAPI function(LPVOID parameter) 
{
	Sleep(500);
	while (1) {
		 {
			printf("Xin chao\r\n");
			Sleep(1000);
		}
		
	}
}

void main() {
	HANDLE thread = CreateThread(NULL, 512, function, NULL, 0, NULL);
	
	while(1) {
		{
			printf("Say hello\r\n");
			Sleep(1000);
		}
		
	}
}