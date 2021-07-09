

#include<stdint.h>
#include<stdio.h>

//32 bit packet
// ADDR_MODE:1 | SHORT_ADDR:2 | LONG_ADDR: 8 | SENSOR:3 | BAT:3 | PAYLOAD:12 | STATUS:1 | CRC:2 |


/*
 * This structure we used to store various fields of the packet in to variables
 * The variable of this structure consumes 4 bytes in the memory
*/

struct Packet
{
	uint32_t crc			:2;
	uint32_t status			:1;
	uint32_t payload		:12;
	uint32_t bat			:3;
	uint32_t sensor			:3;
	uint32_t longAddr		:8;
	uint32_t shortAddr		:2;
	uint32_t addrMode		:1;
};


/*
 * This structure we used to store various fields of the packet in to variables
 * The variable of this structure consumes 10 bytes in the memory
*/

/*
struct Packet
{
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
};

*/

int main(void)
{

   uint32_t packetValue ;
   printf("Enter the 32bit packet value:");
   scanf("%X",&packetValue);

   struct Packet packet;

   packet.crc 		=   (uint8_t) (packetValue & 0x3);
   packet.status 	=   (uint8_t) ( (packetValue >> 2) & 0x1 ); //right shift by 2
   packet.payload   =   (uint16_t) ( (packetValue >> 3) & 0xFFF );
   packet.bat       =   (uint8_t) ( (packetValue >> 15) & 0x7 );
   packet.sensor    =   (uint8_t) ( (packetValue >> 18) & 0x7 );
   packet.longAddr  =   (uint8_t) ( (packetValue >> 21) & 0xFF );
   packet.shortAddr =   (uint8_t) ( (packetValue >> 29) & 0x3 );
   packet.addrMode  =   (uint8_t) ( (packetValue >> 31) & 0x1 );

   printf("crc      :%#x\n",packet.crc);
   printf("status   :%#x\n",packet.status);
   printf("payload  :%#x\n",packet.payload);
   printf("bat      :%#x\n",packet.bat);
   printf("sensor   :%#x\n",packet.sensor);
   printf("longAddr :%#x\n",packet.longAddr);
   printf("shortAddr:%#x\n",packet.shortAddr);
   printf("addrMode :%#x\n",packet.addrMode);

   printf("Size of struct is %lu byte(s).\n",sizeof(packet));

   while(getchar() != '\n');
   getchar();

   return 0;

}











