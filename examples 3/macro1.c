#include <stdio.h>

#define ANGLE 34
#define LOG(s)   printf("LOG:%s\n",s)


int main(void)
{
LOG(" enter: main");

  printf("Hello World, angle %d\n",ANGLE);

LOG(" exit: main\n");
return 0;
}
