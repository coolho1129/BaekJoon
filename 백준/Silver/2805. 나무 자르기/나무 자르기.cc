#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll binarysearch(ll *v, ll start, ll end, ll find,ll size)
{
    ll result = 0;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        ll sum = 0;
        for (ll i = 0; i < size; i++)
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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll N, M, max = 0;
    cin >> N >> M;
    ll *input=new ll[N];



    for (ll i = 0; i < N; i++)
    {
        cin >> input[i];
        if (max < input[i])
            max = input[i];
    }

    cout << binarysearch(input, 0, max, M,N);
}