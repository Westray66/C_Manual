#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

int main(void)
{
uint8_t *ptr;
int x;
clock_t start;

ptr = malloc(1024*1024);

  if (ptr==NULL)
  {
  fprintf(stderr,"could not allocate memory");
  exit(EXIT_FAILURE);
  }

start = clock();
  memset(ptr,0,(1024*1024)); //zero initialize memory
printf ("... time taken to zero 1MB: %lf\n", (double)(clock()-start)/CLOCKS_PER_SEC);

free(ptr);

return 0;
}
