//Not accepted 
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
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    vector<int>arr={a,b,c};
    int ct=0;
    if(m==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(auto i:arr)
        {
            if(i<2)
            {
                continue;
            }
            else
            {
                ct+=i/2;
            }
        }
        // cout<<"ct->"<<ct<<" m->"<<m<<endl;
        if(ct>=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}