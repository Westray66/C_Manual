#include <stdio.h>
#include <string.h>
   
int main(void)
{
char str1[] = "Hello";

printf("... string length \"Hello\"   = %lu\n",strlen(str1));
printf("... string length \"Hello\"+0 = %lu\n",strlen(str1)+1);
 
return 0;
}
