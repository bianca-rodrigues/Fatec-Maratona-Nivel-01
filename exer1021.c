#include <stdio.h>

int main()
{

    double n;
    int cem, cinquenta, vinte, dez, cinco, dois,um, cinqCents, vinCincoCents, dezCents, cincoCents, umCents, nota, resto;

    scanf("%lf", &n);

    nota = n*100;

    cem =  nota/ 10000;

    resto = nota % 10000;

    cinquenta = resto/5000;

    resto = resto%5000;

    vinte = resto/2000;

    resto = resto%2000;

    dez = resto/1000;

    resto = resto%1000;

    cinco = resto/500;

    resto = resto%500;

    dois = resto/200;

    resto = resto%200;

    um = resto/100;

    resto = resto%100;

    cinqCents = resto/50;

    resto = resto%50;

    vinCincoCents = resto/25;

    resto = resto%25;

    dezCents = resto/10;

    resto = resto%10;

    cincoCents = resto/5;

    resto = resto%5;

    umCents = resto/1;

    printf ("NOTAS:\n");

    printf ("%i nota(s) de R$ 100.00\n", cem);

    printf ("%i nota(s) de R$ 50.00\n", cinquenta);

    printf ("%i nota(s) de R$ 20.00\n", vinte);

    printf ("%i nota(s) de R$ 10.00\n", dez);

    printf ("%i nota(s) de R$ 5.00\n", cinco);

    printf ("%i nota(s) de R$ 2.00\n", dois);

    printf ("MOEDAS:\n");

    printf ("%i moeda(s) de R$ 1.00\n", um);

    printf ("%i moeda(s) de R$ 0.50\n", cinqCents);

    printf ("%i moeda(s) de R$ 0.25\n", vinCincoCents);

    printf ("%i moeda(s) de R$ 0.10\n", dezCents);

    printf ("%i moeda(s) de R$ 0.05\n", cincoCents);

    printf ("%i moeda(s) de R$ 0.01\n", umCents);

    return 0;
}