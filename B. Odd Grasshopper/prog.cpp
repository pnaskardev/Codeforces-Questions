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
    int x,n,z=0;
    cin>>x>>n;
    int p=n%4;
    if(p==1)
    {
        z=z-n;
    }
    else if(p==2)
    {
        z=1;
    }
    else if(p==3)
    {
        z=n+1;
    }
    if(x%2!=0)
    {
        cout<<x-z<<endl;
    }
    else
    {
        cout<<x+z<<endl;
    }
}