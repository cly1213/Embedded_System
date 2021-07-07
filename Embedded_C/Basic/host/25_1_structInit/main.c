


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint8_t carSpeed;
	uint32_t carPrice;
	uint32_t carMaxspeed;
	float carWeight;

};

int main(void)
{
	struct carModel  carBMW = {0};

	printf("Sizeof of struct carModel is %lu\n",sizeof(struct carModel));

    getchar();

	return 0;
}









