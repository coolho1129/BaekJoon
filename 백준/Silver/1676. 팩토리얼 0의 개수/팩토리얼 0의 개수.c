#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>
#include <float.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void factorial_zero_cnt(int N)
{
	int tmp=0 ,i=1,cnt=0 ;
	for(i=1;i<=N;i++)
	{
		
		tmp= i;
		
		for (;;)
		{
			
			if (tmp % 5 == 0)
			{

				cnt++;
				tmp /= 5;

			}
		
			else break;
			
			
			
		}
	}
	
	printf("%d", cnt);


}



int main()
{
	int N;
	scanf("%d", &N);
	factorial_zero_cnt(N);

}