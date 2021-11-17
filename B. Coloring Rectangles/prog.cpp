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
    int ans=n*m;
    ans=ceil(ans/3.0);
    cout<<ans<<endl;   
}