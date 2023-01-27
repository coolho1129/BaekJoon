#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


long long operator(long long num)
{
	
	long long result = num;
	for (;;)
	{
		result += num % 10;
		num /= 10;
		if (num == 0)
			break;
		
		
	}

	return result;
}


int main()
{

	long long N,i;
	scanf("%lld", &N);
	for (i = 1; i <= N; i++)
	{	if (N == operator(i))
		{
			printf("%lld", i);
			break;
    }
		
	}
	if (i == N + 1)
		printf("0");

}