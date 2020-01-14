#include <stdio.h>
#include <stdlib.h>

int main (void)
{
FILE *handle;


  handle = fopen ("doesnt_exist.dat","r");

  if (handle==NULL)
  {
  perror ("error: file \"doesnt_exist.dat\"");
  exit (1);
  }

return 0;
}

 
