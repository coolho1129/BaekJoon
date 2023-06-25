#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <float.h>

void cross_point_cnt(int x1, int y1, int r1, int x2, int y2, int r2)
{
	double point_distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	double radius_sum = (double)r1 +r2;
	double radius_diff = fabs((double)r1 - r2);

	if (x1 == x2 && y1 == y2 && r1 == r2)
		printf("-1\n");
	
	else
	{	if(fabs(point_distance - radius_sum) <= FLT_EPSILON || fabs(point_distance - radius_diff) <= FLT_EPSILON)
			printf("1\n");
		else if (point_distance > radius_sum||point_distance<radius_diff)
			printf("0\n");
		else
			printf("2\n");
	}
}

int main()
{
	int T, x1, y1, r1, x2, y2, r2;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		cross_point_cnt(x1, y1, r1, x2, y2, r2);
	}

}