#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack (push)
#pragma pack (1)
typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;
#pragma pack (pop)

const char* data = "HTTP1.1 200 OK{"\
"\"light\": \"on\","\
"\"fan\" : \"off\","\
"\"motor\" : \"off\"}";

smartHome_t pair_data(const char* data) {
	smartHome_t A;
	char statusLight[5] = {0}, statusFan[5] = { 0 }, statusMotor[5] = { 0 };
		sscanf(data, "HTTP1.1 200 OK{"\
			"\"light\": \"%[^\"]\","\
			"\"fan\" : \"%[^\"]\","\
			"\"motor\" : \"%[^\"]\"}", statusLight, statusFan, statusMotor);
		char buf_on[5] = { 'o','n' };
		
		if (strcmp(statusLight, buf_on)==0) A.light = 1;
		else A.light = 0;
		if (strcmp(statusFan, buf_on) == 0) A.fan = 1;
		else A.fan = 0;
		if (strcmp(statusMotor,buf_on)==0) A.motor = 1;
		else A.motor = 0;
		return A;
}
int main()
{
	smartHome_t x = pair_data(data);
	printf("Light of status : %d\r\n", x.light);
	printf("Fan of status : %d\r\n", x.fan);
	printf("Motor of status : %d\r\n", x.motor);
	return 0;
}

//to do: hoān thānh hām pair_data