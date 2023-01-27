#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



int main()
{
	long long A, B, C,i=0;
	scanf("%lld %lld %lld", &A, &B, &C);

	
	if (C - B <= 0)
		printf("%d", -1);


	else 
		printf("%lld", (A / (C - B))+1);
		
			
			
	
}