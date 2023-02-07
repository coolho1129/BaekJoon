#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M, input, cnt;
    long long B, inven;
    vector<vi> land;

    cin >> N >> M >> B;

    int check = N * M;

    for (int i = 0; i < N; i++)
    {
        vector<int> temp;
        for (int j = 0; j < M; j++)
        {
            cin >> input;
            temp.push_back(input);
        }
        land.push_back(temp);
    }

    long long min = LLONG_MAX;
    long long maxheight = 0, time = 0, add = 0;

    for (int h = 0; h < 257; h++)
    {
        time = 0;
        add = 0;
        
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int block = land[i][j] - h;

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