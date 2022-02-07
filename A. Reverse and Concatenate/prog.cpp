#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    string temp=s;
    reverse(temp.begin(),temp.end());
    // cout<<s+temp<<" "<<temp+s<<endl;
    if(k==0)
    {
        cout<<1<<endl;
        return;
    }
    if(s==temp)
    {
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
}