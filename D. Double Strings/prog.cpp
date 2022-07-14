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
    vector<string>arr(n);
    vector<bool>ans(n,false);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<string,int>mp;
    for(auto i:arr)
    {
        mp[i]++;
    }
    for(int i=0;i<n;i++)
    {
        string s=arr[i];
        for(int j=1;j<s.size();j++)
        {
            string s1,s2;
            for(int k=0;k<j;k++)
            {
                s1.push_back(s[k]);
            }
            for(int k=j;k<s.size();k++)
            {
                s2.push_back(s[k]);
            }
            if(mp.find(s1)!=mp.end() && mp.find(s2)!=mp.end())
            {
                ans[i]=true;
                break;
            }
        }
    }
    for(auto i:ans)
    {
        cout<<i;
    }
    cout<<endl;
}