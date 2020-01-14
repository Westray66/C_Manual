#include <stdio.h>
#include <stdint.h>


void print_out_1darray(char *a1,uint8_t size)
{
  do
  {
  a1[size] = size;
  printf("array[%d] = %d\n",size,a1[size]);
  }
  while (size--);
}

void print_out_2darray(char a2[2][2])
{
uint8_t y=1,x;
  do
  {
  x = 1;
    do
    {
    a2[x][y] = x+y;
    printf("array[%d,%d] = %d\n",x,y,a2[x][y]);
    }
    while (x--);
  }
  while (y--); 
}

void print_out_3darray(char (*a3)[2][2])
{
uint8_t z=1,y,x;
  do
  {
  y = 1;
    do
    {
    x = 1;
      do
      {
      a3[x][y][z] = x+y+z;
      printf("array[%d,%d,%d] = %d\n",x,y,z,a3[x][y][z]);
      }
      while (x--);
    }
    while (y--);
  }
  while (z--);
}
   
int main(void)
{
char _a1[2],_a2[2][2],_a3[2][2][2];

print_out_1darray(_a1,1);
print_out_2darray(_a2);
print_out_3darray(_a3);

return 0;
}





