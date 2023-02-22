#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    
    int cnt=0;
    
    for(int i=0;i<str.size()/2;i++){
        if(str[i]!=str[str.size()-1-i]){
            cout<<0;
            break;
        }
        cnt++;
    }
    
    if(cnt==str.size()/2)
        cout<<1;
}