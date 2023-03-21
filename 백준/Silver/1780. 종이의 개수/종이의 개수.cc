#include <bits/stdc++.h>
using namespace std;

vector<int> counts(3);

void countPaper(vector<vector<int>> &paper, int starti, int startj, int size)
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    int end = size * size;
    for (int i = starti; i < starti + size; i++)
    {
        for (int j = startj; j < startj + size; j++)
        {
            if (paper[i][j] == -1)
            {
                cnt1++;
            }
            else if (paper[i][j] == 0)
            {
                cnt2++;
            }
            else
            {
                cnt3++;
            }
        }
    }
    if (cnt1 == end)
    {
        counts[0]++;
    }
    else if (cnt2 == end)
    {
        counts[1]++;
    }
    else if (cnt3 == end)
    {
        counts[2]++;
    }
    else
    {
        size /= 3;
        countPaper(paper, starti, startj, size);
        countPaper(paper, starti, startj + size, size);
        countPaper(paper, starti, startj + size * 2, size);
        countPaper(paper, starti + size, startj, size);
        countPaper(paper, starti + size, startj + size, size);
        countPaper(paper, starti + size, startj + size * 2, size);
        countPaper(paper, starti + size * 2, startj, size);
        countPaper(paper, starti + size * 2, startj + size, size);
        countPaper(paper, starti + size * 2, startj + size * 2, size);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> paper(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> paper[i][j];
        }
    }
    countPaper(paper, 0, 0, n);
    for (int count : counts)
    {
        cout << count << '\n';
    }
    return 0;
}
