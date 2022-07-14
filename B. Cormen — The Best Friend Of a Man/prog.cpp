#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    int n,k;
    cin>>n>>k;
    int total=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    total-=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i]=max(arr[i],k-arr[i-1]);
        total-=arr[i];
    }
    cout<<abs(total)<<endl;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}