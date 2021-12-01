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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int>mp;
    for(auto i:a)
    {
        mp[i]++;
    }
    int minim=1e6;
    for(auto i:mp)
    {
        if(i.second<2)
        {
            minim=min(minim,i.first);
        }
    }
    // cout<<minim<<endl;
    int ans=-1;
    if(minim==1e6)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==minim)
        {
            ans=i+1;
        }
    }
    cout<<ans<<endl;
}