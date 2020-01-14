#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
char two[10][10]; // two dimensional array
unsigned int x,y;

srand((unsigned int)time(NULL));

printf ("\n* two dimensional array\n\n");

// set up the two dimensional array 

  for (x=0; x<=9; x++)
    for (y=0; y<=9; y++)
      two[x][y] = rand() % 10;
   
// printout the two dimensional array

printf ("  ");
  for (x=0; x<=9; x++)  
    printf (" %d ",x);
  printf("\n\n");

  for (y=0; y<=9; y++)
  {
  printf ("%d:",y);
    for (x=0; x<=9; x++)
      printf (" %d ",two[x][y]);
  printf ("\n");
  }
printf ("\n");

return 0;
}
