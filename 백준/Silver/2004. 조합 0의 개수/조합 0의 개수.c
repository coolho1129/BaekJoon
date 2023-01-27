#include <stdio.h> 

void Combination_zero_cnt(long long  N, long long M)
{
	long long two = 0,five=0,K = N-M;

	for (long long i = 5; i <= N; i*=5)
		five += N / i;
	for (long long i = 5; i <= M; i*=5)
		five -= M / i;
	for (long long i = 5; i <= K; i *= 5)
		five -= K / i;
	
    for (long long i = 2; i <= N; i *= 2)
		two += N / i;
	for (long long i = 2; i <= M; i *= 2)
		two -= M / i;

	for (long long i = 2; i <= K; i *= 2)
		two -= K / i;

	
	

	if(five>two)
		printf("%lld\n",two );
	
	else 
		printf("%lld\n", five);






}





int main()
{
	long long N,M;
	scanf("%lld %lld", &N,&M);
	Combination_zero_cnt(N, M);
	

}