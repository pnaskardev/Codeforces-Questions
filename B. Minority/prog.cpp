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
    int oneone=0,onetwo=0;
    int zeroone=0,zerotwo=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            oneone++;
        }
        if(s[i]=='0')
        {
            zeroone++;
        }
    }
    if(zeroone==oneone)
    {
        cout<<zeroone-1<<endl;
        return;
    }
    cout<<min(zeroone,oneone)<<endl;
}