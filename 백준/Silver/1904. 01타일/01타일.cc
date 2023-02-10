#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> dp(N+1);

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= N; i++)
    {
        dp[i] = dp[i - 1] % 15746 + dp[i - 2] % 15746;
    }

    cout << dp[N]%15746;
}
