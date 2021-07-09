

#include<stdint.h>
#include<stdio.h>

struct DataSet
{
	char  data1; //1 byte
	int   data2; //4 byte
	char  data3; //1 byte
	short data4; //2 byte
};

int main(void)
{
	struct DataSet data;

	data.data1  = 0x11;
	data.data2  = 0XFFFFEEEE;
	data.data3  = 0x22;
	data.data4  = 0xABCD;

	uint8_t *ptr;

	ptr = (uint8_t*) &data;

	uint32_t totalSize = sizeof(struct DataSet);

	printf("Memory address       Content \n");
	printf("==============================\n");

	for(uint32_t i = 0 ; i < totalSize ; i++)
	{
		printf("%p ,   %X\n",ptr,*ptr);
		ptr++;
	}

	printf("Total memory consumed by this struct variable = %lu\n",sizeof(struct DataSet));


	getchar();

}
