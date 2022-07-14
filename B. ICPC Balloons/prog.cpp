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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(s[i])==mp.end())
        {
            ans+=2;
            mp[s[i]]++;
        }
        else
        {
            ans++;
            mp[s[i]]++;
        }
    }   
    cout<<ans<<endl;
}