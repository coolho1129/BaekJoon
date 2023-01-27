#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>


int main()
{
	int T,R;
	char str[100][100] = { 0 };

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %s", &R,str[i]);
		
		for (int j = 0; j < strlen(str[i]); j++)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", str[i][j]);
			}
		}
		printf("\n");
	}

}