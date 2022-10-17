#include <stdio.h>
 
int main() 
{
	int num1, num2, num3, num4, num5, quant=0;
	
	scanf("%i %i %i %i %i", &num1, &num2, &num3, &num4, &num5);
	
	if(num1%2 == 0)
	{
		quant = quant+1;
	}
	if(num2%2 == 0)
	{
		quant = quant+1;
	}
	if(num3%2 == 0)
	{
		quant = quant+1;
	}
	if(num4%2 == 0)
	{
		quant = quant+1;
	}
	if(num5%2 == 0)
	{
		quant = quant+1;
	}
		
	printf("%i valores pares\n", quant);
 
    return 0;
}