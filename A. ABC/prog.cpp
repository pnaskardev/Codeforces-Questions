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
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(s.size()>=3)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(s.size()==2 && (s=="01"||s=="10"))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}