#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int Gcd(int a, int b)
{
	int tmp = 0;
	for (;;)
	{
		tmp = a % b;
			a = b;
			b = tmp;
			if (b == 0)
				break;
	
	}
	return a;

}
int main()
{
	int N, num[100] = { 0 },gcd=0;
	scanf("%d",&N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	

	for (int i = 0; i < N - 1; i++)
	{
		gcd = Gcd(num[0], num[i + 1]);
		printf("%d/%d\n", num[0] / gcd, num[i+1] / gcd);

	}
}