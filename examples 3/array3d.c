#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
char three[10][10][10]; // 3 dimensional array
unsigned int x,y,z;

srand((unsigned int)time(NULL));

printf ("\n* three dimensional array \n\n");

// set up the three dimensional array

  for (x=0; x<=9; x++)
    for (y=0; y<=9; y++)
      for (z=0; z<=9; z++)
        three[x][y][z] = rand() % 10;

// printout the three dimensional array

  for (z=0; z<=9; z++)
  {
  printf ("\nz:%d\n",z);

  printf ("  ");
    for (x=0; x<=9; x++)  
      printf (" %d ",x);
    printf("\n\n");

    for (y=0; y<=9; y++)
    {
    printf ("%d:",y);
      for (x=0; x<=9; x++)
        printf (" %d ",three[x][y][z]);
    printf ("\n");
    }
  }

return 0;
}
