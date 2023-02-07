#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M, input, cnt;
    int B, inven;
    vector<int> land;

    cin >> N >> M >> B;

    int size = N * M;

    for (int i = 0; i < size; i++)
    {

        cin >> input;
        land.push_back(input);
    }

    int min = INT_MAX;
    int maxheight = 0, time = 0, add = 0;

    for (int h = 0; h < 257; h++)
    {
        time = 0;
        add = 0;

        for (int i = 0; i < size; i++)
        {

            int block = land[i] - h;

            if (block >= 0) // 블록제거
            {
                time += (2 * block);
                add += block;
                cnt++;
            }

            else // 블록 추가
            {
                time -= block;
                add += block;
                cnt++;
            }
        }

        if (B + add >= 0)
        {
            if (min == time)
            {
                if (maxheight < h)
                    maxheight = h;
            }

            else if (min > time)
            {
                min = time;
                maxheight = h;
            }
        }
    }

    cout << min << " " << maxheight;
}