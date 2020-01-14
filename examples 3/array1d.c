#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
char one[10];
unsigned int x;

srand((unsigned int)time(NULL));

printf ("\n* one dimensional array \n\n");

// set up the one dimensional array

  for (x=0; x<=9; x++)
    one[x] = rand() % 10;

// printout the one dimensional array

printf ("  ");
  for (x=0; x<=9; x++)  
    printf (" %d ",x);
  printf ("\n\n");
printf ("0:");  
  for (x=0; x<=9; x++)  
    printf (" %d ",one[x]);    
  printf ("\n\n");
   
return 0;
}

