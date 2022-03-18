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
    int left=0,right=n-1;
    while(arr[left+1]==1)
    {
        left++;
    }
    while(arr[right-1]==1)
    {
        right--;
    }
    // cout<<left<<" "<<right<<endl;
    if(left>right)
    {
        cout<<0<<endl;
        return;
    }
    cout<<abs(left-right)<<endl;
}