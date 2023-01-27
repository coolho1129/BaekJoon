#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	int n,sum=0;
	char str[100] = { 0 };
	scanf("%d", &n);
	scanf("%s", str);

	for (int i = 0;i < n; i++)
		sum += str[i] - '0';
	printf("%d", sum);
}