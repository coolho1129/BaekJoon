#include <iostream>
#include <cmath>
using namespace std;

int recurfib = 0;
int dpfib = 0;

int recfib(int n)
{
    recurfib++;
    // cout << recurfib << endl;

    if (n == 1 || n == 2)
        return 1;
    else
        return recfib(n - 1) + recfib(n - 2);
}

int Dpfibo(int n)
{
    int fibo[40] = {0, 1, 1};
    for (int i = 3; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        dpfib++;
    }
    return fibo[n];
}

int main()
{
    int n;
    cin >> n;
    recfib(n);
    Dpfibo(n);

    cout << int(round(double(recurfib) / 2)) << " " << dpfib;
}