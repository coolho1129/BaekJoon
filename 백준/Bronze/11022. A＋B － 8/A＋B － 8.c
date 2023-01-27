#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int T, a, b;
	
	scanf("%d", &T);


	for (int i = 1; i <=T; i++)
	{
		scanf("%d %d\n", &a, &b);
		printf("%s #%d: %d + %d = %d\n","Case", i ,a ,b ,a + b);
	}
	return 0;



}