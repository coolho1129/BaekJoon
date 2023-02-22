#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    string input;
    cin>>T;
    while(T--){
        cin>>input;
        cout<<input[0]<<input[input.size()-1]<<"\n";
    }
}