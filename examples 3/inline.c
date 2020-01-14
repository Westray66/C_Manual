#include <stdio.h>
#include <stdint.h>

int main(void)
{
int32_t d = 12345;
int32_t s1 = 10;
int32_t s2 = 20;

__asm("add %[des],%[src1],%[src2]" : [des] "=r" (d) :  [src1] "r" (s1), [src2] "r" (s2));
  
printf("add  %d = %d + %d\n",d,s1,s2);

return 0;
}

