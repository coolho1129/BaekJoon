#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (a < b)
        swap(a, b);

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int n, a, b, g, c;
    cin >> n;

    int *input = new int[n];
    int *arr = new int[n - 1];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = abs(input[i + 1] - input[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            g = arr[0];
        }
        else
        {
            g = gcd(g, arr[i]);
        }
    }

    for (int i = 2; i <= g / 2; i++)
    {
        if (g % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << g;
}