#include <stdio.h>
#include <string.h>

int main(void)
{
char str1[] = "abcdefg";
char str2[] = "12345";

  if (!strcmp(str1,"abcdefg"))
    printf("... 1 str1 equal to \"abcdefg\" \n");
  else
    printf("... 1 str1 not equal to \"abcdefg\" \n");

  if (!strcmp(str1,str2))
    printf("... 2 str1 equal to str2 \n");
  else
    printf("... 2 str1 not equal to str2 \n");

return 0;
}



