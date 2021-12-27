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
    vector<int>arr;
    // first trying to break a;
    if(b!=c && b+c==a)
    {
        arr.push_back(1);
    }
    else if(b==c )
    {
        if(a%2==0)
        {
            arr.push_back(1);
        }
        else
        {
            arr.push_back(0);
        }
    }

    //trying to break b
    if(a!=c && a+c==b)
    {
        arr.push_back(1);
    }
    else if(a==c )
    {
        if(b%2==0)
        {
            arr.push_back(1);
        }
        else
        {
            arr.push_back(0);
        }
    }

    //trying to break c
    if(a!=b && a+b==c)
    {
        arr.push_back(1);
    }
    else if(a==b)
    {
        if(c%2==0)
        {
            arr.push_back(1);
        }
        else
        {
            arr.push_back(0);
        }
    }
    for(auto i:arr)
    {
        if(i==1)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}