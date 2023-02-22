#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str[5];
    int max=0;
    
    for(int i=0;i<5;i++){
        cin>>str[i];
        max=((max<str[i].size())?str[i].size():max);
    }
    
    for(int i=0;i<max;i++){
        for(int j=0;j<5;j++){
            if(i<str[j].size())
                cout<<str[j][i];
        }    
    }
    
}