
// Not Solved
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
    string s1,s2;
    for(int i=0;i<n;i+=2)
    {
        s1.push_back('B');
        s1.push_back('R');
    }
    for(int i=0;i<n;i+=2)
    {
        s2.push_back('R');
        s2.push_back('B');
    }
    int min_idx=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        {
            continue;
        }
        else
        {
            min_idx=i;
            break;
        }
    }
    string res=s;
    if(s[min_idx]==s1[min_idx])
    {
        for(int i=0;i<n;i++)
        {
            if(res[i]=='?')
            {
                if(i>0 && res[i-1])
                res[i]=s1[i];
            }
            else
            {
                continue;
            }
        }
    }
    else if(s[min_idx]==s2[min_idx])
    {
        for(int i=0;i<n;i++)
        {
            if(res[i]=='?')
            {
                res[i]=s2[i];
            }
            else
            {
                continue;
            }
        }
    }
    cout<<res<<endl;
}