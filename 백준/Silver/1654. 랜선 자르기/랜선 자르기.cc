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
    
    if(start>end)
        return mid;
    
    if (sum >= find)
    {  
      return binarySearch(lan, mid+1, end, size, find);
    }
    else
    {
     
            return binarySearch(lan, start, mid-1, size, find);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll N, K,max=0;

    cin >> K >> N;
    // cout << K << N;

    ll *lan = new ll[K];
    for (ll i = 0; i < K; i++)
    {

        cin >> lan[i];
        if(max<lan[i])
            max=lan[i];
    }

   cout << binarySearch(lan, 1, max, K, N);
}