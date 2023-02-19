#include <bits/stdc++.h>

using namespace std;

void hanoi(int N, int A, int B, int C)
{

    if (N == 1)
    {
        cout << A << " " << C << "\n";
    }

    else
    {
        hanoi(N - 1, A, C, B);
        cout << A << " " << C << "\n";
        hanoi(N - 1, B, A, C);
    }
}

void power(char *result, int N)
{
    int mul = 1, carry = 0, len = 0, cnt = 0;

    for (int i = 0; i < N; i++)
    {
        len = strlen(result);

        for (int j = 0; j < len + 1; j++)
        {
            mul = ((j == len) ? carry : ((result[j] == 0) ? 0 : (result[j] - '0')) * 2 + carry);
            result[j] = mul % 10 + '0';
            carry = mul / 10;
        }
    }
}

void printresult(char *result)
{

    int len = strlen(result);
    bool flag = true;

    result[0] = (((result[0] - '0') - 1) + '0');

    for (int i = len - 1; i > 0; i--)
    {
        if (result[i] == '0' && flag)
            continue;
        else
        {
            cout << result[i];
            flag = false;
        }
    }
    cout << result[0] << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char result[102] = {
        0,
    };

    result[0] = '1';

    int N;
    cin >> N;

    power(result, N);
    printresult(result);

    if (N <= 20)
        hanoi(N, 1, 2, 3);
}
