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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int count=0,idx=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=idx)
        {
            idx++;
            count++;
        }
    }
    cout<<idx-1<<endl;
    // cout<<count<<endl;
}