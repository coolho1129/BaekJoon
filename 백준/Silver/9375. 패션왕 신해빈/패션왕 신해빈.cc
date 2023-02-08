#include <bits/stdc++.h>
#define vs vector<string>
#define endl "\n"

using namespace std;

int main()
{

    int T, n;
    cin >> T;

    string name, category;

    for (int i = 0; i < T; i++)
    {
        map<string, int> clothes;
        int result = 1;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> name >> category;

            if (clothes.find(category) != clothes.end())
            {

                clothes[category]++;
            }

            else
            {

                clothes.insert({category, 1});
            }
        }

        for (auto iter = clothes.begin(); iter != clothes.end(); iter++)
        {
            result *= (iter->second + 1);
            // cout << "key: " << iter->first << " value: " << iter->second << endl;
        }

        result--;
        cout << result << endl;
    }
}

