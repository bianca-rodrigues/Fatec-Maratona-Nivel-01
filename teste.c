#include<stdio.h>

int main () {

    

    double x;
    int y, resul, g;
    do{
    scanf("%lf %i", &x , &g);
    y = x;
   resul = y %g;

    printf("%i", resul);
    }while(resul !=0);

    return 0;
}