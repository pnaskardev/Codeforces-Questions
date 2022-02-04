#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int power(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b%2==1)
        {
            ans=ans*a;
        }
        b=b>>1;
        a=a*a;
    }
    return ans;
}
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
    int n,k;
    cin>>n>>k;
    int t=n/power(k,3);
    if(t==n)
    {
        t=1;
    }
    for(int i=0;i<=3;i++)
    {
        cout<<t*power(k,i)<<" ";
    }
    cout<<endl;
}