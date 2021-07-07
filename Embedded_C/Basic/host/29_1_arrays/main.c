


#include<stdio.h>
#include<stdint.h>

int main(void)
{
	uint32_t studentAge[100];
	printf("Size of the studentAge array = %lu\n", sizeof(studentAge) ); //400 bytes
	printf("Base address of the studentAge array = %p\n", studentAge);

	uint8_t someData[10] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
	//uint8_t someData2[];

	printf("Before: 2nd data item = %x\n", *(someData +1));
	*(someData + 1) = 0x09;
	printf("After: 2nd data item = %x\n", *(someData +1));

	printf("contents of this array\n");

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
			printf("%p\t",(someData + i) );
	}
	printf("\n");

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
		printf("%x\t",someData[i]);
	}


	printf("\n");

	for(uint32_t i = 0 ; i < 10 ; i++)
	{
		someData[i] = 0x33;
		printf("%x\t",someData[i]);
	}



	return 0;
}
