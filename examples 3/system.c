#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE *HANDLE;
char user[20];

  if (!system("whoami > me.dat"))
    printf("success\n");
  else
    printf("failed\n");

HANDLE=fopen("me.dat","r");

  if (HANDLE==NULL)
  {
  perror("file me.dat");
  exit(EXIT_FAILURE);
  }

fscanf(HANDLE,"%s",user);
fclose(HANDLE);

printf("user: %s\n",user);

return 0;
}
