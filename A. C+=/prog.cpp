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
    int a,b,n;
    cin>>a>>b>>n;
    int count=0;
    while(a<=n && b<=n)
    {
        if(a<b)
        {
            a+=b;
            count++;
        }
        else
        {
            b+=a;
            count++;
        }
        // cout<<a<<" "<<b<<endl;
    }   
    cout<<count;
    cout<<endl;
}