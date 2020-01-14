#include <stdio.h>
#include <stdlib.h>

int main (void)
{
FILE *handle;


  handle = fopen ("doesnt_exist.dat","r");

  if (handle==NULL)
  {
  fprintf (stderr,"error: file not found \"doesnt_exist.dat\" in %s at %d\n",__FILE__,__LINE__);
  exit (1);
  }

return 0;
}

 
