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
    int sum=a*1+b*2+c*3;
    if(sum%2==0)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        cout<<1<<endl;
    }
}