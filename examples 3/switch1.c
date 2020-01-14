#include <stdio.h>
#include <stdint.h>

void paths (char *test, uint32_t pattern)
{
printf ("%s: %d\n",test,pattern);

  switch (pattern)
  {
  case 203:
  printf ("... path 203 taken\n");
  break;

  case 204:
  case 205:
  printf ("... path 204 and 205 taken\n");
  break;

  case 207:
  printf ("... path 207 taken\n");
  case 208:
  printf ("... path 208 taken\n");
  break;
  
  default:
  printf ("... pattern not recognized default taken\n");
  } 
}
   
int main (void)
{
paths ("test 1: 203", 203);
paths ("test 2: 204", 204);
paths ("test 3: 205", 205);
paths ("test 4: 207", 207);
paths ("test 5: 208", 208);
paths ("test 6: 206", 206);
 
return 0;
}

