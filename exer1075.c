#include <stdio.h>

int main()
{
    int num, resto = 0, i;
    
    scanf("%i", &num);
    
    for(i = 1; i<=10000; i++)
    {
    	resto = i%num;
    	
    	if(resto == 2)
    	{
    		printf("%i\n", i);
		}
	}
    
    return 0;
}