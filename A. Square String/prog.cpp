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
    string s;
    cin>>s;
    if(s.size()%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    int mid=floor(s.size()/2.0);
    string l=s.substr(0,mid);
    string r=s.substr(mid,s.size());
    if(l==r)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}