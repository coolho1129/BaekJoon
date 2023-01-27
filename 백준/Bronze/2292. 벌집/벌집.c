#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int a(int n)
{
	
		return 3 * n * (n -1) + 1;
}

int main()
{
	
	int N,i;
	scanf("%d",&N);

	for (i = 1;; i++)

		if (N <= a(i))
		{
			printf("%d", i);
			break;
		}
	
}