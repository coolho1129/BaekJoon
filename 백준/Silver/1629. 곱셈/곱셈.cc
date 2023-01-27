#include <iostream>

using namespace std;

long int solve(long int n, long int m, long int k)
{

    if (m == 1)
    {
        return n % k;
    }
    else
    {
        long int result = solve(n, m / 2, k);

        if (m % 2 == 0)
            return result * result % k;
        else
            return (result % k * result % k) * n % k;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long int n, m, k;
    cin >> n >> m >> k;
    cout << solve(n, m, k);
}
