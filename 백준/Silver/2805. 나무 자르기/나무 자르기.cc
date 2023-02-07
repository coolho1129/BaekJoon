#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll binarysearch(vector<ll> &v, ll start, ll end, ll find)
{
    ll result = 0;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        ll sum = 0;
        for (ll i = 0; i < v.size(); i++)
        {

            if (v[i] >= mid)
                sum += (v[i] - mid);
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
    ll N, M, max = 0;
    cin >> N >> M;

    vector<ll> input(N);

    for (ll i = 0; i < N; i++)
    {
        cin >> input[i];
        if (max < input[i])
            max = input[i];
    }

    cout << binarysearch(input, 0, max, M);
}