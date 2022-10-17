#include <stdio.h>

int main()
{
    int i = 1, j = 60;

    for (i = 1 ; i <=37 ; i+=3)
    {
        printf("I=%i J=%i\n", i, j);
        j = j-5;
    }
    

    return 0;
}