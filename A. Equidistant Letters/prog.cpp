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
    unordered_map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    for(auto i:mp)
    {
        if(i.second==2)
        {
            cout<<i.first;
            cout<<i.first;
        }
    }
    for(auto i:mp)
    {
        if(i.second==1)
        {
            cout<<i.first;
        }
    }
    cout<<endl;
}