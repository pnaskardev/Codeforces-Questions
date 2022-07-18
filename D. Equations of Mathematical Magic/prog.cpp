#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();

const int M=10000009;
long long pw(long long a, long long b) 
{
    if (b == 0)
    {
        return 1;
    }
    long long res = pw(a, b / 2);
    if (b % 2)
    {
        return res * res * a;
    } 
    else
    {
        return res * res;
    }
}

long long binpow(long long a, long long b, long long m) 
{
    if(b==0)
    {
        return a%m;
    }
    if(b%2==0)
    {
        int t=binpow(a,b,m);
        return (t*t%m);
    }
    else
    {
        int t=binpow(a,(b-1)/2,m);
        t=(t*t)%m;
        return(a*t%m);
    }
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
    int n;
    cin>>n;
    cout<<pw(2,__builtin_popcount(n))<<endl;
}