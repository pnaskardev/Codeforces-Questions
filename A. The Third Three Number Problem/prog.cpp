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
    if(n%2==0)
    {
        // int a=n/2,b=n/2,c=0;
        // int ans=(a^b)+(b^c)+(a^c);
        // cout<<ans<<endl;
        cout<<n/2<<" "<<n/2<<" "<<0<<endl;
    }   
    else
    {
        cout<<-1<<endl;
    }
}