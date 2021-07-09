



#include <stdio.h>
#include <stdint.h>


int main(void)
{
	uint8_t const data = 10;

	printf("Value = %u\n",data);

	//data = 50;
	uint8_t *ptr = (uint8_t*)&data; //uint8_t const *

	*ptr = 5;

	printf("Value = %u\n",data);

	getchar();
}
