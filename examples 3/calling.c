#include <stdio.h>
#include <stdint.h>

extern uint32_t _sumof4numbers
(
 uint32_t a,
 uint32_t b,
 uint32_t c,
 uint32_t d
);

extern uint32_t _sumof5numbers 
(
  uint32_t a,
  uint32_t b,
  uint32_t c,
  uint32_t d,
  uint32_t e
);

extern uint32_t _example_42(void);

int main (void)
{
uint32_t s4,s5,d42;

s4 = _sumof4numbers (1,2,3,4);
s5 = _sumof5numbers (1,2,3,4,5);
d42 = _example_42();

printf ("Procedure Call Standard \n");
printf ("-- sum(1,2,3,4)   =  %d\n",s4);
printf ("-- sum(1,2,3,4,5) =  %d\n",s5);
printf ("-- 42 == %d : %d\n",d42,42==d42);

return 0;
}

