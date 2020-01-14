#include <stdio.h>
#include <time.h>
#include <unistd.h>

// #define DEBUG 

int main(void)
{
#ifdef DEBUG
time_t currtime = time(NULL);
#endif

  printf("Hello World\n");
  sleep(3); // wait 3 seconds

#ifdef DEBUG
printf("debug: time take: %ld\n",time(NULL)-currtime);
#endif

return 0;
}
