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
    if(n%3==0)
    {
        cout<<n/3<<" "<<n/3<<endl;
    }
    else
    {
        int t=(n+2)/3;
        int ans=t+(t-1)*2;
        if(ans==n)
        {
            cout<<t<<" "<<t-1<<endl;
        }
        else
        {
            t=(n-2)/3;
            cout<<t<<" "<<t+1<<endl;
        }
    }
}