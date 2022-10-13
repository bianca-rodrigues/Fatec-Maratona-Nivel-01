#include <stdio.h>
 
int main() 
{
    int num, par=0, resul;
    int i;

    scanf("%i", &num);

    for (i = 1; i <= num/2; i++)
    {
        par = par+2;

        resul = pow(par, 2);

        printf("%i^2 = %i\n", par, resul);
    }
    
    return 0;
}