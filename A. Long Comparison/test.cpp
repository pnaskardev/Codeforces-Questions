#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int power(int a,int b);
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
    int x1,x2; 
    int p1,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    x1=x1*power(10,p1);
    x2=x2*power(10,p2);
    // cout<<x1<<" "<<x2<<endl;
    if(x1<x2)
    {
        cout<<"<"<<endl;
        return;
    }
    if(x1>x2)
    {
        cout<<">"<<endl;
        return;
    }
    if(x1==x2)
    {
        cout<<"="<<endl;
        return;
    }
}
int power(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=ans*a;
        }
        b=b>>1;
        a=a*a;
    }
    return ans;
}