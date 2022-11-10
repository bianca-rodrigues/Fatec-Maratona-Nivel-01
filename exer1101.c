#include <stdio.h>

int main () {

    int m, n, soma = 0;
    int i;

    do{
    scanf("%i %i", &m, &n);

    if(m<=0 || n<=0)
    {
        break;
    }

    if(m < n)
    {
        for (i = m; i <=n; i++)
        {
            printf("%i ", i);
            soma = soma+i;
        }

        printf("Sum=%i\n", soma);
        soma = 0;
    }

    if(n < m)
    {
        for (i = n; i <=m; i++)
        {
            printf("%i ", i);
            soma = soma+i;
        }

        printf("Sum=%i\n", soma);
        soma = 0;
        
    }
    }while(m > 0 && n > 0);

    return 0;
}