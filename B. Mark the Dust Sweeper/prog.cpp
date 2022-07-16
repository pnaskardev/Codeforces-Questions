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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,ans=0;
    while(i<n && arr[i]==0)
    {
        i++;
    }
    for(i;i<n-1;i++)
    {
        if(arr[i]==0)
        {
            ans++;
        }
        ans+=arr[i];
    }
    cout<<ans<<endl;
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}