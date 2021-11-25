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
    if(n%2050==0)
    {
        int t=n/2050;
        // cout<<t<<endl;
        int sum=0;
        while(t>0)
        {
            sum+=(t%10);
            t=t/10;
        }
        cout<<sum<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}