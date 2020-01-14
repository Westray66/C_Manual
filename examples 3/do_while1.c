#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int x =0;

/* 1 */
printf("test 1: multiple statements\n");
x=0;
  do // multiple statements;
  { 
  x++;
  printf("... line %d of 2\n",x);
  }
  while (x!=2);  
 
/* 2 */
printf("test 2: single statements, executes once \n");
  do printf("...  executed once\n"); while (false);
  
/* 3 */
printf("test 3: loop countdown, 2,1 end \n");
x = 3;
 do // countdown loop
 {
 printf("... count down %d\n",x);
 } 
 while (--x);
  
return 0;
}


