#include <stdio.h>

void new_file_path(char *filepath, char *filename)
{
sprintf(filepath,"project/special/%s",filename);
}

void clear(void)
{    
  while (getchar() != '\n' ); // clear stdin
}

int main(void)
{
char project[40];
char filepath[256];

printf("enter project  name?\n");
scanf("%s", project); // scan for user input
clear(); // clear buffer
new_file_path(filepath,project);
printf("filepath: %s\n",filepath);

return 0;
}
