#include <iostream>
using namespace std;

void printStar(int col, int row, int n)
{

    if (((col / n) % 3 == 1) && ((row / n) % 3 == 1))
        cout << " ";
    else
    {
        if (n < 3)
            cout << "*";
        else
            printStar(col, row, n / 3);
    }
}

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printStar(i, j, n);
        }
        cout << "\n";
    }

    return 0;
}