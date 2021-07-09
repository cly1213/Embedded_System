

#include<stdint.h>
#include<stdio.h>

// 4 bytes
union Address
{
	uint16_t shortAddr; //2 bytes
	uint32_t longAddr;  //4 bytes (choose)
};

// 8 bytes

/*
struct Address
{
	uint16_t shortAddr;
	uint32_t longAddr;
};

*/

int main(void)
{

	union Address addr;

	addr.shortAddr = 0xABCD;
	addr.longAddr = 0xEEEECCCC; //Overwirte data

	//Shared the same memory space
	printf("short addr = %#X\n",addr.shortAddr);
	printf("long addr = %#X\n",addr.longAddr);

	getchar();

	return 0;

}











