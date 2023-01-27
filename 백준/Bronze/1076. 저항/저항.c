#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char input[3][10], color[10][10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	
	long long index=0,color_value=0, color_mult[10] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000,	1000000000 };


	for (int i = 0; i < 3; i++)
		scanf("%s", input[i]);

	
		for (long long i = 0; i < 10; i++)
		{
			if (strcmp(input[0], color[i]) == 0)
			
				color_value += i*10;
			
			if (strcmp(input[1], color[i]) == 0)
				color_value += i;
		
			if (strcmp(input[2], color[i]) == 0)
				index = i;
			
		}
		
		printf("%lld", color_value * color_mult[index]);
	
}