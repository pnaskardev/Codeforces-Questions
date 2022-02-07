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
    int sum=a+b+c;
    int k=sum/9;
    if(sum%9!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        int t=min(min(a,b),c);
        if(t>=k)
        {
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
    }
}
