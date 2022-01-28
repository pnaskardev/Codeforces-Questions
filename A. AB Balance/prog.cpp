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
    if(s[0]!=s[s.size()-1])
    {
        s[s.size()-1]=s[0];
    }
    cout<<s<<endl;
}