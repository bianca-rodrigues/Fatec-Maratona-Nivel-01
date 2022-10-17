#include <stdio.h>

int main()
{
    int i, j;

   for(i = 1; i <= 9; i+=2)
   {
   		j = 7;
   		printf("I=%i J=%i\n", i, j);
   		printf("I=%i J=%i\n", i, j-1);
   		printf("I=%i J=%i\n", i, j-2);
   }
    
    return 0;
}