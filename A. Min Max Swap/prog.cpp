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
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].second;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i].first<arr[i].second)
        {
            swap(arr[i].first,arr[i].second);
        }
    }
    int maxim1=INT_MIN;
    int maxim2=INT_MIN;
    for(auto i:arr)
    {
        maxim1=max(maxim1,i.first);
    }
    for(auto i:arr)
    {
        maxim2=max(maxim2,i.second);
    }
    cout<<maxim1*maxim2<<endl;
}