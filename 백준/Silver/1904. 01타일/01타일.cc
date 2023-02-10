#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, mod = 15746;
    cin >> N;

    vector<int> dp(N);

    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i < N; i++)
    {
        dp[i] = dp[i - 1] % mod + dp[i - 2] % mod;
    }

    cout << dp[N - 1] % mod;
}

// 1 1  1개
// 2 (00) 11 2개 
// 3 (00)1  111 3개 
// 4 (00)(00) 11(00) 1111  5개 
// 5 1(00)(00) 111(00) 11111 8개 
// 6 (00)(00)(00) (00)(00)11 (00)1111 111111 13개
