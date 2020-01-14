#include <stdio.h>
#include <stdbool.h>

int main (void)
{
int x;
bool a;

/* 4 */
printf ("test 4: simple toggle loop \n");
a=true;

  while (a)
  {
  a = false;
  printf ("... line printed only once\n");
  }

/* 5 */
printf ("test 5: using break\n");
x=1;

  while (x>0)
  {
    if (x==3) break;
  x++;
  printf ("... line is %d\n",x);
  }

/* 6  */
printf ("test 6: infinite loop press ctrl-c to escape \n"); 
  while (true) ;  // infinite loop that never exits

return 0;
}

