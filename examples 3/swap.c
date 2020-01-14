#include <stdio.h>
#include <assert.h>
#include <stdint.h>

void swap(uint32_t *a,uint32_t *b)
{
uint32_t tmp;

assert((a!=NULL)&&(b!=NULL));
  if (a==b) return;

tmp = *a;
*a = *b;
*b = tmp;
}


int main(void)
{
uint32_t x=10,y=20;

printf("...start swap\n");
printf(" x memory address : 0x%08x\n",(uint32_t)&x);
printf(" y memory address : 0x%08x\n",(uint32_t)&y);

printf("... init: x=%d,y=%d\n",x,y);

swap(&x,&y);
printf("... swap: x=%d,y=%d\n",x,y);

swap(&x,&y);
printf("... swap: x=%d,y=%d\n",x,y);

return 0;
}

