#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


void fac_mul_nei(int x,int y)
{
	if (x % y == 0)
		printf("multiple\n");

	else if (y % x == 0)
		
		printf("factor\n");

	else
		printf("neither\n");
		

}

int main()
{
	int x, y;
	for (;;)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		fac_mul_nei(x, y);

	
	}
}