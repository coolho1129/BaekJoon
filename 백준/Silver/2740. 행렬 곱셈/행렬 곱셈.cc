#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n;
    cin >> m;
    int **input1 = new int *[n];
    int **input2 = new int *[m];

    for (int i = 0; i < n; i++)
    {
        input1[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> input1[i][j];
        }
    }

    cin >> m;
    cin >> k;

    for (int i = 0; i < m; i++)
    {
        input2[i] = new int[k];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> input2[i][j];
        }
    }

    int **output = new int *[n];

    for (int i = 0; i < n; i++)
    {
        output[i] = new int[k];
    }


    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < k; p++)
        {   output[i][p]=0;
            for (int j = 0; j < m; j++)
            {
                output[i][p] += input1[i][j] * input2[j][p];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << "\n";
    }
}
