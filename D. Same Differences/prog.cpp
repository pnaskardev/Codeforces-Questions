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
    vector<int>arr(n),aux(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        aux[i]=arr[i]-i;
    }
    unordered_map<int,int>mp;
    for(auto i:aux)
    {
        mp[i]++;
    }
    int ans=0;
    for(auto i:mp)
    {
        // cout<<i.first<<" "<<i.second<<endl;
        if(i.second>1)
        {
            ans+=(i.second*(i.second-1))/2;
        }
    }
    cout<<ans;
    cout<<endl;
}