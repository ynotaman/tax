/* tex .c*/
//rate = o.3%
#include <stdio.h>
int main ()
{
    float s,t, r=0.03; 
    printf ("enter your salary s\n");
    scanf ("%f",&s);
    
    t=s*r;
    
    printf ("the tax of given salary is t=%f\n",t);
    return 0;
}
