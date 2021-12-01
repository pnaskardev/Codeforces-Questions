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
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<n-1;i++)
    {
        swap(arr[i],arr[i+1]);
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}