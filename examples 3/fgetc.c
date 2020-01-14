#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* macros */
#define NO_TRANSITION -1

/* new datatypes */
typedef struct
{
char c;
uint8_t state;
uint8_t new_state;
int (*function) (int);
} states_str;

/* function prototypes */
int ident(int loc);
int record(int loc);

/* globals */

int at=-1;

states_str states[] =
{
'h',	0,	1,	record,
'h',	1,	1,	record,
'e',	1,	2,	NULL,
'l',	2,	3,	NULL,
'l',	3,	4,	NULL,
'o',	4,	0,	ident,
 0 ,	0,	0,	NULL
};

/* functions */
int record(int loc)
{
at = loc;
return 0;
}

int ident(int loc)
{
printf("... search string 'hello' found at %d\n",at);
return 1;
}

int state_machine(char *title,char *filename)
{
FILE *handle;
int scan;
int current=0; // start state
int transition;
int num;
char c;

printf("%s: \"%s\"\n",title,filename);
num = 0;

handle = fopen(filename,"r");
 
   if (handle == NULL)
   {
   fprintf (stderr,"error: couldn't open %s\n",filename);
   exit(EXIT_FAILURE);
   }

c = fgetc(handle);

  while (c != EOF)
  {
  scan = 0; // reset scan
  transition = NO_TRANSITION; 

    while (states[scan].c !=0 )
    {
      if (c == states[scan].c && current == states[scan].state)
        transition = scan;
    scan++;
    }

    if (transition == NO_TRANSITION)
      current = 0; // reset state
    else
    {
    current = states[transition].new_state;
      if (states[transition].function!=NULL)
        num += states[transition].function((int)(ftell(handle)-1));  
    }
  c = fgetc(handle);
  }

printf("... strings: %d\n",num);
fclose(handle);
return num;
} 

int main(void)
{
state_machine("test 1","string1.dat");
state_machine("test 2","string2.dat");
state_machine("test 3","string3.dat");
state_machine("test 4","string4.dat");
state_machine("test 5","string5.dat");
state_machine("test 6","string6.dat");
return 0;
}
