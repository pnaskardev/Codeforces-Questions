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
    int l,r,a;
    cin>>l>>r>>a;
    int req=r%a;
    int ans;
    ans=(r/a)+req;
    r=r-(req+1);
    if(r>=l)
    {
        ans=max(ans,((r/a)+(r%a)));
    }
    cout<<ans<<endl;
}