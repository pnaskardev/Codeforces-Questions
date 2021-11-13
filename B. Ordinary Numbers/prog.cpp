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
    int ans=0;
    string s=to_string(n);
    string st;
    for(int i=0;i<s.length();i++)
    {
        st+=s[0];
    }
    ans=(s.length()-1)*9;
    ans+=s[0]-'0';
    if(stoll(st)>stoll(s))
    {
        ans--;
    }
    cout<<ans<<endl;
}