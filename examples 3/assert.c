#include <stdio.h>
#include <assert.h>
   
int add_positive_numbers (int a, int b)
{
assert ((a>=0) && (b>=0)); // check to see variables are positive
return (a+b);
}
 
int main (void)
{
int answer;

answer = add_positive_numbers (10,10);
printf ("answer1=%d\n",answer);

answer = add_positive_numbers (10,-10); // assertion error
printf ("answer2=%d\n",answer);

return 0;
}

