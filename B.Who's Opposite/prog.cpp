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
    int a,b,c;
    cin>>a>>b>>c;
    int n=2*(abs(a-b));
    if(c>n|| a>n ||b>n)
    {
        cout<<-1<<endl;
        return;
    }
    int d=n/2+c;
    while(d>n)
    {
        d-=n;
    }
    cout<<d<<endl;
}