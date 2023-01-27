#include <iostream>

using namespace std;

int main()
{
    int n;
    int input[30] = {0};

    for (int i = 0; i < 28; i++)
    {
        cin >> n;
        input[n - 1] = n;
    }

    for (int i = 0; i < 30; i++)
    {
        if (input[i] == 0)
        {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}