#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T, N;
    cin >> T;
    long long dp[11] = {1, 2, 4};

    for (int i = 3; i < 11; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    for (int i = 0; i < T; i++)
    {
        cin >> N;

        cout << dp[N - 1] << "\n";
    }
}

// 1 1 1
// 2 1+1 2 2
// 3  1+2 1+1+1 3  4
// 4 1+1+1+1 1+1+2  2+2 1+3 7
// 5 1+1+1+1+1 1+1+1+2 1+1+3 1+2+2 2+3 13
// 6 1+1+1+1+1+1 1+1+1+1+2 1+1+1+3 1+1+2+2 1+2+3 2+2+2 3+3 24
