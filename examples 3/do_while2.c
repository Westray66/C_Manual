#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int x;
bool a;

/* 4 */
printf("test 4: simple toggle loop \n");
a=true;
  do
  {
  a = false;
  printf("... line printed only once\n");
  }
  while (a);

/* 5 */
printf("test 5: using break\n");
x=1;
  do
  {
    if (x==3) break;
  x++;
  printf("... line is %d\n",x);
  } while (x>0);

/* 6  */
printf("test 6: infinite loop press ctrl-c to escape \n"); 
  do {} while (true);  // infinite loop that never exits

return 0;
}

