#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{

	char a[4] = { 0 }, b[4] = { 0 };
	scanf("%s", a);
	scanf("%s", b);
	char reverse_a[4] = { 0 }, reverse_b[4] = { 0 };
	int index = 2;
	for (int i = 0; i < 3; i++) {
		reverse_a[index--] = a[i];
	}
	index = 2;
	for (int i = 0; i < 3; i++) {
		reverse_b[index--] = b[i];
	}
	
	if (atoi(reverse_a) > atoi(reverse_b)) 
		printf("%d", atoi(reverse_a));
	
	else 
		printf("%d", atoi(reverse_b));
	
	return 0;

}