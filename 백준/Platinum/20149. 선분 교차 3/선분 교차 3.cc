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

pair<double, double> crosspoint(pair<long, long> p1, pair<long, long> p2, pair<long, long> p3, pair<long, long> p4)
{
    long long a1, a2, b1, b2, c1, c2;
    double x, y;
    // line 1
    a1 = p2.second - p1.second;
    b1 = p1.first - p2.first;
    c1 = p1.first * p2.second - p2.first * p1.second;

    // line 2s
    a2 = p4.second - p3.second;
    b2 = p3.first - p4.first;
    c2 = p3.first * p4.second - p4.first * p3.second;

    // cross point

    x = (double)(b2 * c1 - b1 * c2) / (double)(a1 * b2 - a2 * b1);
    y = (double)(a2 * c1 - a1 * c2) / (double)(a2 * b1 - a1 * b2);

    return make_pair(x, y);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(17);

    pair<long, long> a, b, c, d;
    pair<double, double> point;
    cin >> a.first >> a.second >> b.first >> b.second;
    cin >> c.first >> c.second >> d.first >> d.second;

    int D1 = ccw(a, b, c) * ccw(a, b, d);
    int D2 = ccw(c, d, a) * ccw(c, d, b);
    int iscross = 0;

    if (D1 == 0 && D2 == 0)
    {
        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);
        if (a <= d && c <= b)
            iscross = 1;
        else
            iscross = 0;
    }

    else if (D1 <= 0 && D2 <= 0)
        iscross = 1;

    else
        iscross = 0;

    cout << iscross << "\n";

    // cout << slope1 << slope2;

    if (iscross)
    {

        double p = (a.first - b.first) * (c.second - d.second) - (a.second - b.second) * (c.first - d.first);
        if (!p)
        {
            if (b == c && a <= c)
            {
                cout << b.first << " " << b.second;
            }
            else if (a == d && c <= a)
            {
                cout << a.first << " " << a.second;
            }
        }
        else
        {
            point = crosspoint(a, b, c, d);
            cout << point.first << " " << point.second;
        }
    }
}