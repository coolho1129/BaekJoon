#include <iostream>

using namespace std;

int w(int a, int b, int c)
{

    int dp[22][22][22] = {
        0};

    for (int i = 0; i < 22; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            for (int k = 0; k < 22; k++)
            {
                dp[i][j][k] = 1;
            }
        }
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        a = 0, b = 0, c = 0;
        dp[a][b][c] = 1;
    }

    else if (a > 20 || b > 20 || c > 20)
    {
        a = 21, b = 21, c = 21;
        dp[a][b][c] = 1048576;
    }

    else
    {
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                for (int k = 1; k <= c; k++)
                {
                    if (i < j && j < k)
                    {
                        dp[i][j][k] = dp[i][j][k - 1] + dp[i][j - 1][k] - dp[i][j - 1][k];
                    }
                    else
                    {
                        dp[i][j][k] = dp[i - 1][j][k] + dp[i - 1][j - 1][k] + dp[i - 1][j][k - 1] - dp[i - 1][j - 1][k - 1];
                    }
                }
            }
        }
    }
    return dp[a][b][c];
}

int main()
{
    int a, b, c;

    for (;;)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
    }
}