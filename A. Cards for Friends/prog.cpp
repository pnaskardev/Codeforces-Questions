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
    int w,h,n;
    cin>>w>>h>>n;
    int c=1;
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    while(w%2==0 || h%2==0)
    {
        if(w%2==0 && h%2!=0)
        {
            w=w/2;
            c=c*2;
        }
        else if(w%2!=0 && h%2==0)
        {
            h=h/2;
            c=c*2;
        }
        else if(w%2==0 && h%2==0)
        {
            w=w/2;
            c=c*2;
        }
    }
    if(c>=n)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}