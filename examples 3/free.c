#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
uint8_t *ptr;

ptr = (uint8_t *) malloc(100*4); // allocate 400 bytes
  
  if (ptr==NULL)
  {
  fprintf(stderr,"malloc failed %s at %d\n",__FILE__,__LINE__);
  exit(EXIT_FAILURE);
  }
  
printf("... successfully allocated 400 bytes, now available \n");

/* ... do something useful */

free(ptr); // deallocate 400 bytes

printf("... successfully deallocated 400 bytes, now not available \n");

return 0;
}

