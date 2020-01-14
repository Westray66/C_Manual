#include <stdio.h>

#define MAX 10

int main(void)
{
int x;
int y;

/* 1 */ 
printf("test 1: for loop from 0 to 10 \n");
y=0;
  for (x=0; x<=10; x++)
  {
  y++;
  }
printf("... looped round %d times\n",y);

/* 2 */
printf("test 2: for-loop from 10 to 1 \n");
y=0;
  for ( ; x>1; x--)
    y++;

printf("... looped round %d times\n",y);

/* test 3 */
printf("test 3: matrix operation \n");
  {
  int matrix[10][10];

     for (x=0; x<MAX; x++)
       for (y=0; y<MAX; y++)
         matrix[x][y] = y+x;
   
     for (y=(MAX-1); y>=0; y--)
     {
       for (x=0; x<MAX; x++)
       {
       printf("%4d",matrix[x][y]);
          if (x!=0) printf(",");
       }
     printf("\n");
     }
  }

return 0;
}



