#include <stdio.h>
#include <math.h>

double calculate45degrees(double (*funct)(double))
{
return funct(45.0);
}

int main(void)
{
printf ("sin(45.0) = %lf\n",calculate45degrees(sin));
printf ("cos(45.0) = %lf\n",calculate45degrees(cos));

return 0;
}
