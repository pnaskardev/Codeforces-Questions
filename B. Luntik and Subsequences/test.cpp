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
    unordered_map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.find(1)==mp.end())
    {
        cout<<0<<endl;
        return;
    }
    int zero=0,one=0;
    if(mp.find(0)!=mp.end())
    {
        it=mp.find(0);
        zero=it->second;
    }
    it=mp.find(1);
    one=it->second;
    cout<<((int)1<<zero)*one<<endl;
}