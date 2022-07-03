#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int func(string s);
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
    string s,t;
    cin>>s>>t;
    int ans=0;
    string temp="";
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            ans+=2+func(temp);
            temp="";
        }
        else
        {
            temp+=s[i];
        }
    }

    cout<<ans+func(temp)<<endl;
}


int func(string s)
{
    // cout<<s<<endl;
    int n=s.size();
    int ans=count(s.begin(),s.end(),'0');
    // int ans=0;
    bool a=false,b=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a=true;
        }
        if(s[i]=='1')
        {
            b=true;
        }
        if(a==true && b==true)
        {
            ans++;
            a=false;
            b=false;
        }
    }
    // cout<<ans<<endl;
    return ans;
}