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
    int a,b;
    cin>>a>>b;
    if(a!=0)
    {
        cout<<a+2*b+1<<endl;
        return;
    }
    cout<<a+1<<endl;
}