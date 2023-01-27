#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, position, input, count = 0, print = 1, find;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        vector<int> v;
        cin >> N >> position;
        for (int j = 0; j < N; j++)
        {
            cin >> input;
            v.push_back(input);
        }

        find = v[position];

        for (int k = 0; k < v.size(); k++)
        {
            if (v[0] < v[k])
            {
                // cout << v[0] << "\n";

                // cout << position << "\n";

                v.push_back(v[0]);
                v.erase(v.begin());

                k = -1;
                if (position == 0)
                {
                    position = v.size() - 1;
                }
                else
                {
                    position--;
                }

                count = -1;
            }

            else
            {
                count++;
            }

            if (count == v.size() - 1||N==1)
            {
                count = -1;
                // cout << position << "\n";

                if (v[0] == find && position == 0)
                {
                    cout << print << "\n";
                    break;
                }
                // cout << "v[0]: " << v[0] << "\n";

                position--;
                v.erase(v.begin());
                print++;
                k = -1;
            }
        }

        print = 1;
    }
}
