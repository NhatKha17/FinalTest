#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

void tachBit(int n) {
	unsigned char high = 0;
	unsigned char low = n;
	printf("8 bit thap %d(0x%x)\r\n", low, low);
	high = n >> 8;
	printf("8 bit cao %d(0x%x)\r\n",high,high);
}

void main() {
	unsigned int n=0;
	printf("Nhap vao so n o dang Thap phan:"); scanf("%d", &n);printf("so vua nhap %d(0x%x)\r\n", n, n);
	tachBit(n);
}