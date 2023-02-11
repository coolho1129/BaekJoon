#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, F, temp, min;
    cin >> N >> F;

    temp = N % 10;
    temp += (N / 10 % 10) * 10;

    // cout << temp;

    for (int i = 0; i < 100 - temp; i++)
    {
        if ((N + i) % F == 0)
        {
            min = temp + i;
            break;
        }
    }

    for (int i = temp; i > 0; i--)
    {
        if ((N - i) % F == 0)
        {

            min = min > temp - i ? temp - i : min;
            break;
        }
    }
    min < 10 ? cout << 0 << min : cout << min;
}