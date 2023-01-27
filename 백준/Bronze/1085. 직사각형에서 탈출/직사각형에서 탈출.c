#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 




int main()
{
	int x, y, w, h, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int distance[4] = { x,y,w - x,h - y };
	min = distance[0];
	for (int i = 1; i < 4; i++)
	{
		if (min > distance[i])
			min = distance[i];
	}
	printf("%d",min);
}
