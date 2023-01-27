#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char board[8][9] = { 0, };
	int cnt = 0;
	
	for (int i = 0; i < 8; i++)
		scanf("%s", board[i]);

	for (int i = 0; i < 8; i++)
	{
		
		for (int j = 0; j < 8; j++)
		{
			
			if (((i % 2 == 0 && j % 2 == 0)|| (i % 2 == 1 && j % 2 == 1)) && (board[i][j] == 'F'))
			{
				
				cnt++;

			}
			
		
		
		
		}
	}
	printf("%d", cnt);


}