#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	int N,cmp=0 ,cnt = 0, num[1000] = { 0 },i=2;
	scanf("%d", &N);
	cmp = N;
	
	for(;;)
	{
		
		if (N == 1)
			return 0;
			
		if (cmp==1)
			break;
		else if ((cmp % i) == 0)
		{
			
			num[cnt++] = i;
			cmp /= i;


		}
		else
			i++;
			
		
	}
	
	for (int i = 0; i<cnt;i++)
	{
		printf("%d\n", num[i]);
	}



}