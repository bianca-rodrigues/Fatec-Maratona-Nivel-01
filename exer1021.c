#include <stdio.h>

int main()
{

float n;
int cem, cinquenta, vinte, dez, cinco, dois,um, cinqCents, vinCincoCents, dezCents, cincoCents, umCents, nota, resto;

scanf("%f", &n);

nota = n;

cem =  nota/ 100;

resto = nota % 100;

printf("%i\n", cem);

cinquenta = resto/50;

resto = resto%50;

printf("%i\n", cinquenta);

vinte = resto/20;

printf("%i\n", vinte);

resto = resto%20;

dez = resto/10;

printf("%i\n", dez);

resto = resto%10;

cinco = resto/5;

printf("%i\n", cinco);

resto = resto%5;

dois = resto/2;

printf("%i\n", dois);

resto = resto%2;

um = resto/1;

printf("%i\n", um);

resto = resto%1;

printf("%i\n", resto);

cinqCents = resto/0.5;

printf("%i", cinqCents);

resto = resto%0.5;

vinCincoCents = resto/0.25;

printf("%i", vinCincoCents);

resto = resto%0.25;

dezCents = resto/0.1;

printf("%i", dezCents);

resto = resto%0.1;

cincoCents = resto/0.05;

printf("%i", cincoCents);

resto = resto%0.05;

umCents = resto/0.01;

printf("%i", umCents);

resto = resto%0.01;


    return 0;
}