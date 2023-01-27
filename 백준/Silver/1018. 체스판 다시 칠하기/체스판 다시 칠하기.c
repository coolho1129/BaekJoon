#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))

void Count_repaint(char** input,int N,int M) {
	char chess[8][9] = { "WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW" };

	
	int result = 64;
	for (int i = 0; i<N-7; i++) {
		
		for (int j = 0; j < M - 7; j++) {
			int cnt = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if (input[k][l] != chess[k - i][l - j]) {
						cnt++;
					}
				}
			}
			cnt = min(cnt, 64 - cnt);
			result = min(result, cnt);
		}


	}

	printf("%d", result);
}

int main() {
	int N, M;
	scanf("%d %d", &N,&M);
	char** input = calloc(N, sizeof(char*));
	for (int i = 0; i < N; i++) {
		input[i] = calloc(M+1, sizeof(char));
	}
	

	for (int i = 0; i < N; i++) {
		scanf("%s", input[i]);
	}
	
	Count_repaint(input, N, M);

	

	return 0;
}