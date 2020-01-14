#include <stdio.h>
#include <stdint.h>

typedef struct
{
uint8_t x;
uint8_t y;
uint16_t color;
} pixel_str;

void display(pixel_str *ptr)
{
printf ("x coordinate : %d\n",ptr->x);
printf ("y coordinate : %d\n",ptr->y);
printf ("color        : 0x%6.6x\n",ptr->color);
} 

int main (void)
{
pixel_str point;

point.x = 23;
point.y = 12;
point.color = 0x00ff00; // RGB GREEN

display(&point); // display pixel
return 0;
}

