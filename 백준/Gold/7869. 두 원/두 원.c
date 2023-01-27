#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h> 
#include <math.h>


double cos2law(double a,double b,double c) {
	return (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c);
}

double area(double r, double th) {
	return pow(r, 2) * (th - sin(th)) / 2;
}

int main() {
	double x1, x2, y1, y2, r1, r2,L,th1,th2,Area;
	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
	L = sqrt(pow(fabs(x1 - x2), 2) + pow(fabs(y1 - y2), 2));
	th1 = acos(cos2law(r2, L, r1))*2;
	th2 = acos(cos2law(r1, L, r2))*2;
	Area = area(r1, th1) + area(r2, th2);
	
	if (L<=fabs(r1 - r2))
		Area = pow((r1 < r2 ? r1 : r2), 2)*M_PI;
	else if (L>=fabs(r1 + r2))
		Area = 0;

	Area = round(Area * 1000) / 1000;
	printf("%.3lf", Area);


	return 0;
}
