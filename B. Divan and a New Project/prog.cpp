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
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    int time=0;
    vector<int>ans(n);
    int idx=1;
    for(int i=n-1;i>=0;i=i-2)
    {
        int temp=2*idx;
        time=time+(arr[i].first)*temp;
        ans[arr[i].second]=idx;
        idx++;
    }
    idx=-1;
    for(int i=n-2;i>=0;i=i-2)
    {
        int temp=2*abs(idx);
        time=time+(arr[i].first)*temp;
        ans[arr[i].second]=idx;
        idx--;
    }
    cout<<time<<endl;
    cout<<0<<" ";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}