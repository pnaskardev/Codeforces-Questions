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
        cin>>arr[i];
    }
    int maxim=INT_MIN;
    for(int i=1;i<n;i++)
    {
        maxim=max(arr[i-1]*arr[i],maxim);
    }
    cout<<maxim<<endl;
}