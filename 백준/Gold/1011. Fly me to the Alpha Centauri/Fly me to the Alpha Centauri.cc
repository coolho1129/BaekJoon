#include<bits/stdc++.h>
using namespace std;
    
int main()
{  
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,x,y,m,res;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        m=y-x;
        res=sqrt(4*m-1);
        cout<<res<<"\n" ;          
    }
}