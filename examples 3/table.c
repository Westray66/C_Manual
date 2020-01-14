#include <stdio.h>
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
'h',    0,      1,      record,
'h',    1,      1,      record,
'e',    1,      2,      NULL,
'l',    2,      3,      NULL,
'l',    3,      4,      NULL,
'o',    4,      0,      ident,
 0 ,    0,      0,      NULL
};

/* functions */
int record(int loc)
{
at=loc;
return 0;
}

int ident(int loc)
{
printf ("... search string 'hello' found at %d\n",at);
return 1;
}

int state_machine(char *title,char *text)
{
int indx=0; // start index 
int scan;
int current=0; // start state
int transition;
int num;

printf ("%s: \"%s\"\n",title,text);
num = 0;

  while (text[indx])
  {
  scan=0; // reset scan
  transition = NO_TRANSITION; 

    while (states[scan].c!=0)
    {
      if (text[indx]==states[scan].c && current==states[scan].state)
        transition = scan;
    scan++;
    }

    if (transition==NO_TRANSITION)
      current = 0; // reset state
    else
    {
    current = states[transition].new_state;
      if (states[transition].function!=NULL)
        num +=states[transition].function(indx);  
    }
  indx++;
  }

printf ("... strings: %d\n",num);
return num;
} 

int main (void)
{
state_machine ("test 1","kjdhskjfhjkfhhellokjdsfkdj");
state_machine ("test 2","");
state_machine ("test 3","dljhjklsdjkfdehjkhed");
state_machine ("test 4","jhdjshjdsjkhellodkskljfdlhfdhello");
state_machine ("test 5","jkhdjshjkhelljhjkkjhkjdhkhello");
state_machine ("test 6","jksahdhhellohellohellokkdjklj");
return 0;
}

