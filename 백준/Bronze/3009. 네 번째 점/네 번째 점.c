#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void find_x4_y4(int a[])
{
	if (a[0] == a[1])
		a[3] = a[2];
	else if (a[1] == a[2])
		a[3] = a[0];
	else if (a[0] == a[2])
		a[3] =a[1];
}

int main()
{
	int x[4] = { 0 }, y[4] = { 0 };
	
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);
	
	find_x4_y4(x);
	find_x4_y4(y);
	
	printf("%d %d", x[3], y[3]);
}