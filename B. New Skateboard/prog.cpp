#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a=s[i]-'0';
        if(a%4==0)
        {
            ans++;
        }
    }
    for(int i=1;i<n;i++)
    {
        int a=s[i]-'0',
        b=s[i-1]-'0';
        int temp=s[i-1]*10+s[i];
        if(temp%4==0)
        {
            ans+=i;
        }
    }
    cout<<ans<<endl;
}