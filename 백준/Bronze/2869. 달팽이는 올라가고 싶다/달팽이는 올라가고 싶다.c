#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



int main()
{
	
	int A, B, V,day=1;
	scanf("%d %d %d", &A, &B, &V);

	day += ceil((double)(V - A) / (A - B));
	printf("%d", day);
	
	
}