#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
FILE *handle;
time_t seconds;

handle = fopen("seconds.dat","r");

  if (handle == NULL)
  {
  perror("seconds.dat");
  exit(EXIT_FAILURE);
  }

fscanf(handle,"%ld",&seconds);
printf("record Unix time is: %ld\n",seconds);
fclose(handle);
return 0;
}
