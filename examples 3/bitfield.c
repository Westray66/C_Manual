#include <stdio.h>
#include <stdint.h>

typedef struct
{
uint8_t data:7;
uint8_t parity:1;
} volatile comms;

comms *device = (comms *)0x80000000;

int main(void)
{

device->parity = 1;
device->data = 34;

printf ("parity: %d \n",device->parity);
printf ("data: %d \n",device->data);

return 0;
}
