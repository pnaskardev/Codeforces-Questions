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
    if(mp.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    pair<int,int>maxim{0,0};
    maxim.first=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxim.first=max(maxim.first,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==maxim.first)
        {
            maxim.second=i;
        }
    }
    if(maxim.second==n-1)
    {
        cout<<0<<endl;
        return;
    }
    if(maxim.second==n-2)
    {
        cout<<1<<endl;
        return;
    }
    if(maxim.second<n-2 && maxim.second>=0)
    {
        set<int>s;
        int j=n-1;
        for(int i=n-2;i>maxim.second;i--)
        {
            s.insert(max(arr[i],arr[j]));
            j--;
        }
        cout<<s.size()<<endl;
    }
}