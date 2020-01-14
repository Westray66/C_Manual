#include <stdio.h>

enum direction {North,South,West,East};
enum day {Mon=1,Tue,Wed,Thu,Fri,Sat=10,Sun};

int main(void)
{
enum direction heading;
enum day today;

today=Wed;
heading=North;

printf ("today is %d and moving in %d direction \n",today,heading);

return 0;
}
