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
    vector<int>arr(4);
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int a=min(arr[0],arr[1])*min(arr[3],arr[2]);
    cout<<a<<endl;
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}