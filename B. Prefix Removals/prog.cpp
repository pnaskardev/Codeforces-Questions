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
    map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[i]]>=1)
        {
            mp[s[i]]--;
        }
        if(mp[s[i]]==0)
        {
            cout<<s.substr(i)<<endl;
            break;
        }
    }
}