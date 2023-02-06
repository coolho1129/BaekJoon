#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

ll binarySearch(ll *lan, ll start, ll end, ll size, ll find)
{
    ll result = 0;
    while (start <= end)
    {

        ll mid = (start + end) / 2;
        ll sum = 0;
        for (ll i = 0; i < size; i++)
        {
            sum += lan[i] / mid;
        }

        if (sum >= find)
        {
            result = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll N, K, max = 0;

    cin >> K >> N;

    ll *lan = new ll[K];
    for (ll i = 0; i < K; i++)
    {

        cin >> lan[i];
        if (max < lan[i])
            max = lan[i];
    }

    cout << binarySearch(lan, 1, max, K, N);
}
