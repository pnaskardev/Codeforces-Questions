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
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(auto i:a)
    {
        mp[i]++;
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int count=0;
    for(auto i:b)
    {
        if(mp.find(i)!=mp.end())
        {   
            count++;
        }
    }
    cout<<count<<endl;
}