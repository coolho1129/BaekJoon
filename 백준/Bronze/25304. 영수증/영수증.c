#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main() {
	int total, n, money, cnt, result = 0;;
	scanf("%d %d", &total, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &money, &cnt);
		result += money * cnt;
	}
	total == result?printf("Yes"):printf("No");
    return 0;
}
	