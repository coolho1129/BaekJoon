#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
 int stack[1000000] = { 0 };
int main()
{
	int N,top=-1,x;
	char input[100] = { 0 };
	scanf("%d", &N);
	

	for (int i = 0; i < N; i++)
	{
		scanf("%s", input);
		if (strcmp("push", input)==0)
		{
			scanf("%d", &x);
			stack[++top] = x;
		}
		
		
		else if (strcmp("pop", input) == 0)
		{
			if (top != -1)
			{
				printf("%d\n", stack[top--]);
				
			}

			else
				printf("%d\n", top);
		}
		else if	(strcmp("size",input) == 0)
		{
			printf("%d\n", top+1);
		}
		else if (strcmp("empty", input) == 0)
		{
			if (top != -1)
				printf("0\n");
			else
				printf("1\n");

		
		}

		else if (strcmp("top", input) == 0)
		{
			if (top != -1)
				printf("%d\n", stack[top]);
			else
				printf("%d\n", top);
		
		}
	
	
	}

}