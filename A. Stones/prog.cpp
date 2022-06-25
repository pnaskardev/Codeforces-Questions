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
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    while(b>=1 && c>=2)
    { 
        if(b>=1 && c>=2)
        {
            b=b-1;
            c=c-2;
            ans+=3;
        }
    }
    while(a>=1 && b>=2)
    {
        if(a>=1 && b>=2)
        {
            a=a-1;
            b=b-2;
            ans+=3;
        }
    }
    cout<<ans<<endl;
}