#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<0<<endl;
        return;
    }
    if(a==b && a!=0 && b!=0)
    {
        cout<<1<<endl;
        return;
    }
    if(a!=b && abs(a-b)%2==0)
    {
        cout<<2<<endl;
        return;
    }
    cout<<-1<<endl;
}