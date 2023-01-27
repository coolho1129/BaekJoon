#include <stdio.h> 
#include <stdlib.h>


int checkPrimenum(int num)
{
	int i;
	if (num ==1)
		return 0;
	
	for (i = 2; i < num; i++)
	{
		if(num% i == 0)
			return 0;
	}
	if (i == num)
		return 1;
}

int main()
{
	int N,M,sum=0,cnt=0;
	scanf("%d %d", &N,&M);
	int* prime_num = (int*)malloc(sizeof(int) * (M - N + 1));
	for (int i = N; i <=M; i++)
	{
		if (checkPrimenum(i) == 1)
		{
			sum += i;
			prime_num[cnt++] = i;
			

		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum,prime_num[0]);
}
