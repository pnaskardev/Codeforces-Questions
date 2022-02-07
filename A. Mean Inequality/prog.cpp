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
    int size=2*n;
    vector<int>arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    vector<int>ans;
    int i=0,j=size-1;
    while(i<j)
    {
        // cout<<arr[i]<<" "<<arr[j]<<endl;
        ans.push_back(arr[i]);
        ans.push_back(arr[j]);
        i++;
        j--;
        
    }
    // cout<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}