#include <stdio.h>
 
int main() 
{
    float media, num1, num2, num3, num4, num5, num6, soma=0;
    int posit=0;

    scanf("%f %f %f %f %f %f", &num1, &num2, &num3, &num4, &num5, &num6);

    if (num1>0)
    {
        posit = posit + 1;
        soma = soma + num1;
    }
    if (num2>0)
    {
        posit = posit + 1;
        soma = soma + num2;
    }
    if (num3>0)
    {
        posit = posit + 1;
        soma = soma + num3;
    }
    if (num4>0)
    {
        posit = posit + 1;
        soma = soma + num4;
    }
    if (num5>0)
    {
        posit = posit + 1;
        soma = soma + num5;
    }
    if (num6>0)
    {
        posit = posit + 1;
        soma = soma + num6;
    }

    media = soma/posit;

    printf("%i valores positivos\n", posit);
    printf("%.1f\n", media);

 
    return 0;
}