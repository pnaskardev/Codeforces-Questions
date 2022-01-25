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
    int a,b,c=1,n;
    cin>>n;
    int temp=(n-1)/2;
    if(n%2==0)
    {
        a=2;
        b=n-1-a;
    }
    else
    {
        if(temp%2==0)
        {
            a=temp+1;
            b=temp-1;
        }
        else
        {
            a=temp+2;
            b=temp-2;
        }
    }
    // cout<<a+b+c<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
    // cout<<endl;
}