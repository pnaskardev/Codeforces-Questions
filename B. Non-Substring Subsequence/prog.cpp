#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
void calc(string s);
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
    int n,q;
    string s;
    cin>>n>>q;
    cin>>s;
    while(q--)
    {
        calc(s);
    }   
}
void calc(string s)
{
    int a,b;
    cin>>a>>b;
    int n=s.size();
    a--,b--;
    bool bad=true;
    for(int i=0;i<a && bad==true;i++)
    {
        if(s[i]==s[a])
        {
            bad=false;
        }
    }
    for(int i=b+1;i<n && bad==true;i++)
    {
        if(s[i]==s[b])
        {
            bad=false;
        }
    }
    if(bad==true)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
