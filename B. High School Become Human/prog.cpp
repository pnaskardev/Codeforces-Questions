#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
const int M=1000000007;
long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0) 
    {
        if (b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    int a,b;
    cin>>a>>b;
    // cout<<binpow(a,b,M)<<" "<<binpow(b,a,M)<<endl;
    // if(binpow(a,b,M)>binpow(b,a,M))
    // {
    //     cout<<">"<<endl;
    // }
    // else if(binpow(a,b,M)<binpow(b,a,M))
    // {
    //     cout<<"<"<<endl;
    // }
    // else
    // {
    //     cout<<"="<<endl;
    // }
    if(a==b)
    {
        cout<<"="<<endl;
    }
    else if(a==1)
    {
        cout<<"<"<<endl;
    }
    else if(b==1)
    {
        cout<<">"<<endl;
    }
    else if(a+b==6)
    {
        cout<<"="<<endl;
    }
    else if(a==3)
    {
        cout<<">"<<endl;
    }
    else if(b==3)
    {
        cout<<"<"<<endl;
    }
    else if(a<b)
    {
        cout<<">"<<endl;
    }
    else 
    {
        cout<<"<"<<endl;
    }
}