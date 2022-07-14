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
    unordered_map<int,int>mp;
    unordered_map<int,int>::iterator it;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]=i+1;
    }
    sort(arr.begin(),arr.end());
    int i=0;
    int j=arr.size()-1;
    vector<int>ans;
    for(int k=0;k<n;k++)
    {
        int t=abs(arr[i]-arr[k])+abs(arr[k]-arr[j]);
        ans.push_back(t);
    }
    bool res=true;
    for(int i=1;i<ans.size();i++)
    {
        if(ans[i]!=ans[i-1])
        {
            res=false;
        }
    }
    if(res==true)
    {
        it=mp.find(arr[i]);
        int a=it->second;
        it=mp.find(arr[j]);
        int b=it->second;
        if(a>b)
        {
            swap(a,b);
        }
        cout<<a<<" "<<b<<endl;
    }
}