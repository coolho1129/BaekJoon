#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a0, c, n0, result = 1;
    cin >> a1 >> a0 >> c >> n0;

    for (int i = n0; i < 101; i++)
    {
        if ((a1 * i + a0) > (c * i))
        {
            result = 0;
            break;
        }
    }
    cout << result;
}