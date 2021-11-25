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
    int a,b;
    cin>>a>>b;
    if(b==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
}