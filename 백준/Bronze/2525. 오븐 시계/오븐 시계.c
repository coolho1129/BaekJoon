#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>



int main() {
	int a,b,c,term,H,M;
	
	scanf("%d %d %d", &a,&b,&c);
	term = a*60+b + c;
	H = term / 60;
	M = term % 60;
	
	if (H > 23) {
		H = H - 24;
	}


	
	
	printf("%d %d",H,M);

	

	return 0;
}