#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    vector<int>arr;
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }   
    sort(arr.begin(),arr.end());
    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int ans=INT_MAX;
    for(int i=0;i<=m-n;i++)
    {
        ans=min(ans,arr[i+n-1]-arr[i]);
    }
    cout<<ans<<endl;
}