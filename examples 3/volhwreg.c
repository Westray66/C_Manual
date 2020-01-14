#include <stdio.h>
#include <stdint.h>

#define REG_COMMS      0x800000000
#define VOLATILE8(s)   *(volatile uint8_t *)(s)

int main(void)
{    
uint8_t comms;

// READ ...
comms = VOLATILE8(REG_COMMS); 

// MODIFY ...
comms &= 0x80; /* bitwise AND 0b_0000000 = 00  */
comms |= 0x22; /* bitwise OR  0b_0100010 = 34  */ 
comms |= 0x80; /* bitwise OR  0b10100010 = 134 */

// WRITE ...
VOLATILE8(REG_COMMS) = comms;

// OUTPUT
printf ("parity: %d\n",(VOLATILE8(REG_COMMS) & 0x80) >> 7);
printf ("data: %d\n",(VOLATILE8(REG_COMMS) & 0x7F));

return 0;
}
#error "Please run the program, just an example"
