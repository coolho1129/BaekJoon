#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b,t){t=a;a=b;b=t;}

int num[1000000];

int main() {
	int start, end,cnt=0;
	scanf("%d %d", &start, &end);
	
	for (int i = 2; i <= end; i++) {
		num[i] = i;
	}

	for (int i = 2; i <=end; i++) {
		if (num[i] != 0) {
			for (int j = i; j <= end; j += i) {
				if (num[j] != 0) {
					num[j] = 0;

				}

			}
			if(i>=start)
				printf("%d\n", i);
					
				
			}
		}
	}
	
