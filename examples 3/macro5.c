#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define BUFSIZE 700

int main(void)
{
int margin;

#if defined BUFSIZE && BUFSIZE > 1024
margin = 2;
#elif BUFSIZE > 624
#error "BUFSIZE is wrong size"
#else
margin = 0;
#endif

printf("margin=%d\n",margin);
return 0;
}
