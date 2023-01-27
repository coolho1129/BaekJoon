#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int i,a,b = 0;
	int max = 0;
	int gcd = 0;
	scanf("%d %d", &a,&b);
	

		if (a >= b)
		{
			max = a;
		}
		else
		{
			max = b;
		}
		for (i = 1; i <= max; i++)
			if (a % i == 0&&b % i == 0)
			{
				gcd = i;
				
			}
		
	
		printf("%d\n%d",gcd,a*b/gcd);

	}