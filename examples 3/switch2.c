#include <stdio.h>

int state_machine(char *title,char *text)
{
int indx=0;
int at;
int state=0;
int num=0;

printf("%s: \"%s\"\n",title,text);

  while (text[indx])
  {
    switch (text[indx])
    {
    case 'h':
      if (state==0 || state==1) // two hh's
      { 
      state = 1;
      at = indx;
      }
      else
        state = 0;
    break;
    case 'e':
      if (state==1)
        state = 2;
      else
        state = 0;
    break;
    case 'l':
      switch (state)
      {
      case 2: state=3; break;
      case 3: state=4; break;
      default: state=0;
      }
    break;
    case 'o':
      if (state==4)
      {
      printf("... search string \'hello\' found at %d\n",at);
      num++;
      }    
    default :
    state = 0;
    }
  indx++;
  }    

printf("... strings: %d\n",num);
return num;
}

int main (void)
{
state_machine("test 1","kjdhskjfhjkfhhellokjdsfkdj");
state_machine("test 2","");
state_machine("test 3","dljhjklsdjkfdehjkhed");
state_machine("test 4","jhdjshjdsjkhellodkskljfdlhfdhello");
state_machine("test 5","jkhdjshjkhelljhjkkjhkjdhkhello");
state_machine("test 6","jksahdhhellohellohellokkdjklj");
return 0;
} 
