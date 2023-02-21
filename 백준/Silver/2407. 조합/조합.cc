#include <bits/stdc++.h>

using namespace std;

char dp[101][101][33] = {
    0,
};

void reverse(char arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

void pascal(int N, int M)
{
    char temp[33] = {0};

    int len = strlen(dp[N - 1][M]) > strlen(dp[N - 1][M - 1]) ? strlen(dp[N - 1][M]) : strlen(dp[N - 1][M - 1]);
    int carry = 0;

    reverse(dp[N - 1][M - 1]);
    reverse(dp[N - 1][M]);

    for (int i = 0; i < len; i++)
    {

        int sum = (dp[N - 1][M - 1][i] - '0') + (dp[N - 1][M][i] - '0') + carry;

        while (sum < 0)
            sum += '0';

        carry = sum / 10;
        temp[i] = sum % 10 + '0';
    }

    if (carry == 1)
        temp[len] = '1';

    reverse(temp);
    reverse(dp[N - 1][M - 1]);
    reverse(dp[N - 1][M]);

    strcpy(dp[N][M], temp);
}

void combinaion(int N, int M)
{
    if (N == M)
    {
        cout << 1;
        return;
    }

    strcpy(dp[6][0], "1");
    strcpy(dp[6][1], "6");
    strcpy(dp[6][2], "15");
    strcpy(dp[6][3], "20");
    strcpy(dp[6][4], "15");
    strcpy(dp[6][5], "6");
    strcpy(dp[6][6], "1");

    for (int i = 7; i <= N; i++)
    {
        for (int j = 0; j <= M; j++)
        {
            if (j == 0)
                dp[i][j][0] = '1';
            else
                pascal(i, j);
        }
    }

    cout << dp[N][M];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    combinaion(N, M);
}
