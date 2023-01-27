#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<int> input;

    for (int i = 1; i <= n; i++)
    {
        input.push_back(i);
    }

    int index = 1, count = 0;
    cout << "<";
    for (int i = 0; i < input.size(); i++)
    {

        if (index % m == 0)
        {
            cout << input[i];
            if (count != n - 1)
            {
                cout << ", ";
            }
            else
            {
                cout << ">";
            }
            input.erase(input.begin() + i);
            count++;

            i--;
        }

        if (i == input.size() - 1)
        {

            i = -1;
        }

        index++;
    }
}
