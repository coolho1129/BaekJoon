#include <iostream>

using namespace std;

int main()
{
    int input[9][9] = {0}, max, maxrow = 1, maxcol = 1;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> input[i][j];
        }
    }
   

    max = input[0][0];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (max < input[i][j])
            {
                max = input[i][j];
                maxcol = j + 1;
                maxrow = i + 1;
            }
        }
    }

    cout << max << "\n";
    cout << maxrow << " " << maxcol << "\n";

    return 0;
}