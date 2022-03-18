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
    int n;
    cin>>n;
    if(pow(3,n-1)>=1e9)
    {
        cout<<"NO"<<endl;
    }   
    else
    {
        cout<<"YES"<<endl;
        int res=1;
        cout<<res<<" ";
        for(int i=0;i<n-1;i++)
        {
            cout<<res*3<<" ";
            res=res*3;
        }
        cout<<endl;
    }
}