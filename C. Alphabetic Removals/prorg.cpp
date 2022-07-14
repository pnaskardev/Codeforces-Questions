#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    vector<bool>arr(s.size(),true);
    unordered_map<char,int>mp;
    unordered_map<char,int>::iterator it;
    for(int i=0;i<s.size();i++)
    {
        if(mp.find(s[i])!=mp.end())
        {
            mp[s[i]]=min(i,mp[s[i]]);
        }
        else
        {
            mp[s[i]]=i;
        }
    }
    // for(auto i:mp)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    int ans=0;
    for(int i='a';i<='z';i++)
    {
        char x=char(i);
        if(mp.find(char(i))!=mp.end())
        {
            it=mp.find(char(i));
            int j=it->second;
            for(j;j<s.size();j++)
            {
                if(x==s[j] && ans<k)
                {
                    // cout<<s[j]<<endl;
                    arr[j]=false;
                    ans++;
                }
                else if(ans==k)
                {
                    break;
                }
            }
        }
        else
        {
            continue;
        }
    }
    // for(auto i:arr)
    // {
    //     cout<<i;
    // }
    // cout<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(arr[i]==true)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}