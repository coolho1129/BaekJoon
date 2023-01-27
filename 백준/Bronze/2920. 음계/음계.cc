#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int input[8] = {0}, asc = 0, des = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> input[i];
    }

    for (int i = 1; i < 8; i++)
    {
        if (input[i] - input[i - 1] == 1)
            asc++;

        else if (input[i] - input[i - 1] == -1)
            des++;

        else
        {
            cout << "mixed";
            break;
        }
    }

    if (asc == 7)
    {

        cout << "ascending";
    }
    else if (des == 7)
    {
        cout << "descending";
    }

    return 0;
}