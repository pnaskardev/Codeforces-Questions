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
    int n=s.size();
    vector<int>idx;
    bool res=false;
    unordered_map<char,int>mp;
    unordered_map<char,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0 && i<n-1)
        {
            if(s[i-1]!=s[i+1-1])
            {
                idx.push_back(i);
            }
            if(s[i-1]==s[i+1-1])
            {
                res=true;
            }
        }
    }
    if(res==false)
    {
        int counter=0;
        for(int i=0;i<idx.size();i++)
        {   
            if(mp.find(s[idx[i]-1])!=mp.end())
            {
                it=mp.find(s[idx[i]-1]);
                if((it->second%2)==0)
                {
                    int t=it->second;
                    // cout<<s[idx[i]-1]<<endl;
                    counter+=t/2;
                }
            }
        }
        cout<<s.size()-counter<<endl;
        return;
    }
    int ans=idx.size();
    if((s.size()-ans)%2!=0 && res==true)
    {
        ans++;
    }
    cout<<ans<<endl;
}