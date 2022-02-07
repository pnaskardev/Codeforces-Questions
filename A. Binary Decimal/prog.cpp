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
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            int t=s[i]-'0';
            c=max(c,abs(0-t));
        }
    }
    if(c==0)
    {
        cout<<1<<endl;
        return;
    }
    cout<<c<<endl;
}