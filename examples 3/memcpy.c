#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

#define CMAX (1024*1024)

int main(void)
{
uint8_t *dest,*src;
int x;
clock_t start;

dest = malloc(CMAX);
src = malloc(CMAX);

  if (dest==NULL || src==NULL)
  {
  fprintf(stderr,"could not allocate memory");
  exit(EXIT_FAILURE);
  }

memset(src,'a',CMAX);

start = clock();
  memcpy(dest,src,CMAX); 
printf ("- time taken to zero %dB: %lf\n",CMAX,(double)(clock()-start)/CLOCKS_PER_SEC);

x=0;

  while (*(src+x)==*(dest+x) && ++x<CMAX);
  
  if (x!=CMAX)
    printf ("... memcpy failed at %x\n",x);

free(src);
free(dest);

return 0;
}
