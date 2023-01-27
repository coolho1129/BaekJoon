#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>



int num[1000000];

void primeNumCnt(int input) {
	int cnt = 0,start=input+1,end=2*input;
	
	for (int i = 2; i <= end; i++) {
		num[i] = i;
	}

	for (int i = 2; i <= end; i++) {
		if (num[i] != 0) {
			for (int j = i; j <= end; j += i) {
				if (num[j] != 0) {
					num[j] = 0;

				}

			}
			if (i >= start)
					cnt++;

			
		}
	}
	printf("%d\n", cnt);
}


int main() {
	int input, end,cnt=0;
	for (;;) {
		scanf("%d", &input);
		if (!input)
			break;
		primeNumCnt(input);
	}
	
	
}
	
