#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    string s;
    cin>>s;
    if(s.length()>10)
    {
        string res;
        res=s[0]+to_string(s.length()-2)+s[s.length()-1];
        cout<<res<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
}