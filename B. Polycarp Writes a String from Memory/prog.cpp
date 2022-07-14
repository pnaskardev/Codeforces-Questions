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
    int ans=0;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();)
    {
        int j=i;
        while(mp.size()<3 && j<s.size())
        {
            mp[s[j]]++;
            j++;
        
        }
        while(j<s.size() && mp.find(s[j])!=mp.end())
        {
            mp[s[j]]++;
            j++;
        }
        i=j;
        mp.clear();
        ans++;
        // cout<<endl;
    }
    cout<<ans<<endl;
}