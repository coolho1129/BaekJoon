#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>


void check_right(int x,int y,int z)
{
	int side[3] = { x,y,z },tmp=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{	
			if (side[i] > side[j])
			{
				tmp = side[i];
				side[i] = side[j];
				side[j] = tmp;
			}
		}
	}
	
	if ((int)pow(side[2],2) == (int)pow(side[1],2) + (int)pow(side[0],2))
		printf("right\n");
	else
		printf("wrong\n");
}

int main()
{
	int i, x[100] = { 0 }, y[100] = { 0 }, z[100] = { 0 };

	for (i = 0; ; i++)
	{
		scanf("%d %d %d", &x[i], &y[i], &z[i]);
		if (x[i] == 0 && y[i] == 0 && z[i] == 0)
			break;
	}
	for (int j = 0; j < i; j++)
		check_right(x[j], y[j], z[j]);

}