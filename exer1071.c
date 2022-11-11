#include<stdio.h>

int main () {

    int x, y, soma=0;
    int i;

    scanf("%i%i", &x, &y);

    if(x < y)
    {
        for (i = x+1; i < y; i++)
        {
            if(i%2 != 0){
                soma = soma + i;
            }
            
        }
        
        printf("%i\n", soma);
    }

    if( y < x)
    {
        for (i = y+1; i < x; i++)
        {
            if (i%2 != 0)
            {
                soma = soma + i;
            }
            
        }
        
        printf("%i\n", soma);
    }
    if (x == y)
    {
        printf("0\n");
    }

    return 0;
}