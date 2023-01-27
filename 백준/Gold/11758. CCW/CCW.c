#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



struct point{

	int x;
	int y;

};
int main()
{
	struct point p[3] = { 0 };
	int D, i;

	for (i = 0; i < 3; i++)
		scanf("%d %d", &p[i].x, &p[i].y);

	D = (p[0].x * p[1].y + p[1].x * p[2].y + p[2].x * p[0].y) - (p[0].y * p[1].x + p[1].y * p[2].x + p[2].y * p[0].x);
	
	if (D > 0)
		printf("1");

	else if(D<0)
		printf("-1");
	else 
		printf("0");

}