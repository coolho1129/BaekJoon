#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main() {
	int a,b,c,result;
	
	scanf("%d %d %d", &a,&b,&c);

	if (a == b && b == c) {
		result = 10000 + a * 1000;
	}
	else if (a == b ||  c == a) {
		result = 1000 + a * 100;
	}

	else if (b == c) {
		result = result = 1000 + b * 100;
	}
	else {
		result=max(max(a, b), c) * 100;
	}


	
	
	printf("%d", result);

	

	return 0;
}