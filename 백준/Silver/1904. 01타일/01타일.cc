#include <bits/stdc++.h>
using namespace std;
#define MOD 15746

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;

    int dp[1000000]={1,2};

   

    for (int i = 2; i < N; i++)
    {
        dp[i] = (dp[i - 1] % MOD + dp[i - 2] % MOD)%MOD;
    }

    cout << dp[N - 1];
}

// 1 1  1개
// 2 (00) 11 2개 
// 3 (00)1  111 3개 
// 4 (00)(00) 11(00) 1111  5개 
// 5 1(00)(00) 111(00) 11111 8개 
// 6 (00)(00)(00) (00)(00)11 (00)1111 111111 13개
