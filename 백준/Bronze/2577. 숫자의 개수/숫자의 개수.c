#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main()
{
	int a, b, c, i, j, d;


	scanf("%d %d %d", &a, &b, &c);
	int left[10] = { 0 };
	int X = a * b * c;

	for (i = 0; i < 9; i++)
	{
		if (X != 0)
		{


			d = X % 10;
			left[d] += 1;
			X = X / 10;

		}

	}
	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", left[i]);



	}
}