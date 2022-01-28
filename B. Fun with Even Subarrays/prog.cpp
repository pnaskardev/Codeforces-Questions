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
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    int c=0;
    int ele=arr[arr.size()-1];
    for(auto i:arr)
    {
        if(i!=ele)
        {
            c++;
        }
    }
    cout<<c<<endl;
}