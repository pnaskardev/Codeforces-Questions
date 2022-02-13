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
    int sum=0;
    for(auto i:arr)
    {
        sum+=i;
    }
    int ans;
    if(sum>n)
    {
        ans=sum-n;
    }
    else if(sum==n)
    {
        ans=0;
    }
    else 
    {
        ans=1;
    }
    cout<<ans<<endl;
}