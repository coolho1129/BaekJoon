#include <iostream>

using namespace std;

int main()
{
    int n, search, cnt = 0;
    int *input = new int[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (search == input[i])
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}