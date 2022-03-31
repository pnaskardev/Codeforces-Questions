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
    int n,k;
    cin>>n>>k;
    int res=0;
    while(n>0)
    {
        if(n%k==0)
        {
            n=n/k;
            res++;
        }
        else if(n%k!=0)
        {
            int rem=n%k;
            res+=rem;
            n-=rem;
        }
    }
    cout<<res<<endl;
}