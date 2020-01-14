#include <stdio.h>
#include <string.h>
  
int main (void)
{
char src[] = "Hello";
char dest[10];
  
printf ("dest \"%s\" == src \"%s\"\n",strcpy(dest,src),src);

return 0;
}

