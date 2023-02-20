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

void power(char *result, int N)
{
    int mul = 1, carry = 0, len = 0;

    for (int i = 0; i < N; i++)
    {
        reverse(result);
        len = strlen(result);
        carry = 0;

        for (int j = 0; j < len; j++)
        {
            int tmp = (result[j] - '0');

            while (tmp < 0)
                tmp += '0';

            mul = tmp * 2 + carry;
            result[j] = mul % 10 + '0';
            carry = mul / 10;
        }
        if (carry)
            result[len] = (carry + '0');

        reverse(result);
    }

    int maxidx = strlen(result) - 1;
    result[maxidx] = (result[maxidx] - '0' - 1) + '0';

    cout << result << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char result[31] = {
        0,
    };

    result[0] = '1';

    int N;
    cin >> N;

    power(result, N);
    if (N <= 20)
        hanoi(N, 1, 2, 3);
}
