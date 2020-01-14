#include <stdio.h>
#include <stdbool.h>

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
int x =0;

/* 1 */
printf ("test 1: multiple statements\n");
x=0;
  while (x!=2) // multiple statements;
  { 
  x++;
  printf ("... line %d of 2\n",x);
  }  
 
/* 2 */
printf ("test 2: single statements, not executed \n");
  while (false) printf ("... never executed\n");
 
/* 3 */
printf ("test 3: loop countdown, 2,1 end \n");
x = 3;
 while (--x) // countdown loop
 {
 printf ("... count down %d\n",x);
 }
  
return 0;
}


