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
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)   
    {
        cin>>arr[i];
    }
    for(auto i:arr)
    {
        mp[i]++;
    }
    bool flag=false;
    for(auto i:mp)
    {
        if(i.second>1)
        {
            flag=true;
        }
        else
        {
            continue;
        }
    }
    if(flag==false)
    {
        cout<<-1<<endl;
        return;
    }
    int len=INT_MIN;
    vector<int>first(150001,-1);
    vector<int>last(150001,-1);
    for(int i=0;i<n;i++)
    {
        if(first[arr[i]]==-1)
        {
            first[arr[i]]=i;
        }
        else if(last[arr[i]]==-1)
        {
            last[arr[i]]=i;
            len=max(len,first[arr[i]]+n-1-last[arr[i]]+1);
        }
        else
        {
            first[arr[i]]=last[arr[i]];
            last[arr[i]]=i;
            len=max(len,first[arr[i]]+n-1-last[arr[i]]+1);
        }
    }
    cout<<len<<endl;
}