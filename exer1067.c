#include <stdio.h>
 
int main() 
{
    int num, impar=(-1);
    int i;
    
    scanf("%i", &num);

    for (i = 1; i <= num; i+=2)
    {
        impar = impar+2;

        printf("%i\n", impar);
    }

    return 0;
}