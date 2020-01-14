#include <stdio.h>

int main(void)
{
float f = 3.14159265;
int i = 1223456;
char s[] = "Hello";
char c = 'a';

printf("%f,%d,0x%8.8x,\"%s\",%c\n",f,i,i,s,c);
fprintf(stdout,"%f,%d,0x%8.8x,%s,%c\n",f,i,i,s,c);

return 0;
} 
