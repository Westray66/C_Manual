#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
FILE *HANDLE;
time_t seconds;

HANDLE = fopen("seconds.dat","w");

  if (HANDLE == NULL)
  {
  perror("seconds.dat");
  exit(EXIT_FAILURE);
  }

seconds = time(NULL);
fprintf(HANDLE,"%ld",seconds);
fclose(HANDLE);
return 0;
}
