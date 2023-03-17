#include <bits/stdc++.h>
using namespace std;

int ccw(pair<long, long> a, pair<long, long> b, pair<long, long> c)
{
    long long D;
    D = a.first * b.second + b.first * c.second + c.first * a.second - a.second * b.first - b.second * c.first - c.second * a.first;

    if (D > 0)
        return 1;
    else if (D < 0)
        return -1;
    else
        return 0;
}

bool iscross(pair<long, long> a, pair<long, long> b, pair<long, long> c, pair<long, long> d)
{
    int D1 = ccw(a, b, c) * ccw(a, b, d);
    int D2 = ccw(c, d, a) * ccw(c, d, b);

    if (D1 == 0 && D2 == 0)
    {
        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);
        if (a <= d && c <= b)
            return true;
    }

    else if (D1 <= 0 && D2 <= 0)
        return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<long, long> a, b, c, d;
    cin >> a.first >> a.second >> b.first >> b.second;
    cin >> c.first >> c.second >> d.first >> d.second;
}