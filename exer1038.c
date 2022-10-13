#include <stdio.h>

int main()
{
    int cod, quant;
    float total;

    scanf("%i %i", &cod, &quant);

    switch (cod)
    {
    case 1: total = 4*quant;
        break;

    case 2: total = 4.50*quant;
        break;

    case 3: total = 5*quant;
        break;

    case 4: total = 2*quant;
        break;            
    
    case 5: total = 1.5*quant;
        break;

    default:
        break;
    }

    printf("Total: R$ %.2f\n", total);


    return 0;
}