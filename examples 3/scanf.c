#include <stdio.h>

void clear (void)
{    
  while ( getchar() != '\n' );
}

int main()
{
char c;
char str[100];

  do
  {
  printf("enter your name?\n");
  scanf(" %s", str);
  clear();
  printf("the name you entered was %s \n", str);
  printf("is this correct y/n?\n");
  c = getchar();
  } while (c!='y');

return 0;
}

