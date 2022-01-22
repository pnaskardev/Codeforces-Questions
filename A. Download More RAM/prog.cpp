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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(arr[i].first<=k)
        {
            k+=arr[i].second;
        }
        // cout<<k<<endl;
    }
    cout<<k<<endl;
    // for(auto i:arr)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
}