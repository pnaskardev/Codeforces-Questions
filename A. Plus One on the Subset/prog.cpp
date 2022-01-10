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
        int t=arr[i];
        mp[t++];
    }   
    sort(arr.begin(),arr.end());
    int maxim=arr[arr.size()-1];
    int minim=arr[0];
    int res=maxim-minim;
    cout<<res<<endl;
}