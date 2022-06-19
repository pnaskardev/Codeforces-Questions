#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(auto i:arr)
    // {
    //     cout<<i<<endl;
    // }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            mp[arr[i][j]]++;
        }
    }
    bool ans=true;
    for(auto i:mp)
    {
        if(i.second%n!=0)
        {
            ans=false;
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}