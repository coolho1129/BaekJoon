#include <iostream>
using namespace std;

int main()
{
    bool arry[100][100] = {
        0,
    };

    int n, x, y, area = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        for (int j =x; j < x + 10; j++)
        {
            for (int k =y; k < y + 10; k++)
            {
                if (arry[j][k]!=1)
                {
                    arry[j][k] = 1;
                    area++;
                }
            }
        }
    }

    cout << area;

    return 0;
}