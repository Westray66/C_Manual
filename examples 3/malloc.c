#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
char src[]="Hello";
char *dest;

dest = (char *)malloc(strlen(src)+1);

  if (dest==NULL)
  {
  fprintf(stderr,"error: malloc failed to allocate in %s at %d\n",__FILE__,__LINE__);
  exit(EXIT_FAILURE);
  }

printf ("dest \"%s\" == src \"%s\"\n",strcpy(dest,src),src);
 
return 0;
}
