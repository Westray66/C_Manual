#include <stdio.h>

int main(void)
{
char c;

printf ("press any key and then return-key \n");

  do
  {
  c = getchar();
  printf ("%d pressed \n",c);
  }
  while (c!='e');

printf("... complete\n");
return 0;
}


 
