#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    int n,idx;
    cin>>n>>idx;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    bool ans=false;
    int i=1;
    while(i<idx)
    {
        i+=arr[i];
    }
    // for(i=1;i<idx;i++)
    // {
    //     i+=arr[i];
    //     if(i==idx)
    //     {
    //         ans=true;
    //         break;
    //     }
    // }
    // if(ans==true)
    // {
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // cout<<"NO"<<endl;
    if(i==idx)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}