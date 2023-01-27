#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int que[2000000];

int main()
{
	int N, top = -1, x,bot=0;
	char input[1000] = { 0 };
	scanf("%d", &N);


	for (int i = 0; i < N; i++)
	{
		scanf("%s", input);
		if (strcmp("push", input) == 0)
		{
			scanf("%d", &x);
			que[++top] = x;
		}


		else if (strcmp("pop", input) == 0)
		{
			if (top-bot>=0)
			{
				
				printf("%d\n", que[bot]);
				que[bot++];
				
			}

			else
				printf("-1\n");
		}
		else if (strcmp("size", input) == 0)
		{
			printf("%d\n", top-bot+1);
		}
		else if (strcmp("empty", input) == 0)
		{
			if (top - bot >= 0)
				printf("0\n");
			else
				printf("1\n");


		}

		else if (strcmp("front", input) == 0)
		{
			if (top - bot >= 0)
				printf("%d\n", que[bot]);
			else
				printf("-1\n");

		}
		else if (strcmp("back", input) == 0)
		{
			if (top - bot >= 0)
				printf("%d\n", que[top]);
			else
				printf("-1\n");

		}


	}

}