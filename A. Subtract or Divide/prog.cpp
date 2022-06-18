#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
    if(n==1)
    {
        cout<<0<<endl;
    }
    else if(n==2)
    {
        cout<<n-1<<endl;
    }
    else if(n==3)
    {
        cout<<n-1<<endl;
    }
    else
    {
        if(n%2==0 && n>3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    
}