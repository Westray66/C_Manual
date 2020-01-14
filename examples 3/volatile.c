#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
 
volatile int x=0;
  
void sig_handler(int signal_number)
{
  if (signal_number == SIGINT)
  {
  printf("signal SIGINT caught\n");
  x=x+1;   
  } 
}

int main(void)
{

  if (signal(SIGINT, sig_handler) == SIG_ERR)
  {
  printf("\nproblem catching SIGINT\n");
  exit(EXIT_FAILURE);
  }
 
printf ("waiting for 3 ctrl-c key presses\n");

  while(x<3) ; 

printf ("3 ctrl-c key presses occurred\n"); 

return 0;
}

