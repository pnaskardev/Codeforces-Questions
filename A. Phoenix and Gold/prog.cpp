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
    int n,x;
    cin>>n>>x;
    int sum=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum==x)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    sum=0;
    int j=arr.size()-1;
    for(int i=0;i<n;i++)
    {
        if((sum+arr[i])!=x)
        {
            sum+=arr[i];
        }
        else
        {
            swap(arr[i],arr[i+1]);
            sum+=arr[i];
        }
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}