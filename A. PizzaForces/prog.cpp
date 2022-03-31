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
    if(n<=6)
    {
        cout<<15<<endl;
        return;
    }
    if(n%2==0)
    {
        cout<<(n)*5/2<<endl;
    }
    else
    {
        cout<<(n+1)*5/2<<endl;
    }
}