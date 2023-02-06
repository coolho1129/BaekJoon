#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

ll binarySearch(ll *lan, ll start, ll end, ll size, ll find)
{
    ll mid = (start + end) / 2;
    ll sum = 0;
    for (ll i = 0; i < size; i++)
    {
        sum += lan[i] / mid;
    }
    if (sum >= find)
    {
        if (start == mid)
            return mid;
        else
            return binarySearch(lan, mid, end, size, find);
    }
    else
    {
        if (start == mid)
            return start;
        else
            return binarySearch(lan, start, mid, size, find);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll N, K;

    cin >> K >> N;
    // cout << K << N;

    ll *lan = new ll[K];
    for (ll i = 0; i < K; i++)
    {

        cin >> lan[i];
    }

    sort(lan, lan + K);
    cout << binarySearch(lan, 1, lan[K - 1]+1, K, N);
}