#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



int CountHansu(int num)
{
	int i, cnt = 0;
	for (i = 1; i <= num; i++)
	{

		if (i< 100)
			cnt++;
		else if(i<1000&&((i%10)+(i/100))==((i/10)%10)*2)
		   cnt++;
    }
	return cnt;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", CountHansu(N));
}