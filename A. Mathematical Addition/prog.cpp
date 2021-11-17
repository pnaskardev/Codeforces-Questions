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
    int u,v;
    cin>>u>>v;
    int ans1=u*u;
    int ans2=v*v;
    cout<<-ans1<<" "<<ans2<<endl;
}