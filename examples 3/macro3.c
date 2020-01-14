#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
#ifndef NODEBUG
time_t currtime = time(NULL);
#endif

  printf("Hello World\n");
  sleep(3); // wait 3 seconds

#ifndef NODEBUG
printf("debug: time take: %ld\n",time(NULL)-currtime);
#endif

return 0;
}
