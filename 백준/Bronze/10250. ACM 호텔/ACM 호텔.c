#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



int main()
{
	int T, H, W,N;
	
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		for (int j = 1;; j++)
		{
			if (N - H * j <= 0)
			{
				printf("%d\n", (N - H*(j-1)) * 100 + j);
				break;

			}
		}
	}

}