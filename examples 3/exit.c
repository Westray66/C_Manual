#include <stdio.h>
#include <stdlib.h>

int main (void)
{
FILE *handle;
 
handle = fopen ("doesnt_exist.dat","r");

  if (handle==NULL)
  {
  printf ("error: couldn't open file \n");
  exit (EXIT_FAILURE);
  }

printf ("*** terminated program without errors\n");
return 0;
}
