#include <stdio.h>
#include <stdint.h>

int main(void)
{
uint32_t reg;
uint32_t mask;

// init values ...
reg =  0x12345678; // 0b0001.0010.0011.0100.0101.0110.0111.1000
mask = 0xFFF00FFF; // 0b1111.1111.0000.0000.1111.1111.1111

printf ("set reg          : 0x%8x \n",reg);
printf ("set mask         : 0x%8x \n",mask);

// action ...
reg &= mask;       // 0b0001.0010.0011.0000.0000.0110.0111.1000

printf ("set reg &=  mask : 0x%8x \n",reg);

reg |= (0x00054000 & ~mask); // 0b0001.0010.0011.0101.0100.0110.0111.1000

printf ("set reg |= new   : 0x%8x \n",reg);

return 0;
}



