#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);


}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", factorial(N));

}