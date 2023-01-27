#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int **a = new int *[n];
    int **b = new int *[n];
    int **result = new int *[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        b[i] = new int[m];
        result[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}