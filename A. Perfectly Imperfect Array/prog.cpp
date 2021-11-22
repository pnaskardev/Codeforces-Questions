#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool binary(vector<int>&arr,int target);
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
bool binary(vector<int>&arr,int target)
{
    int start=0,end=arr.size()-1;
    while (start<=end)  
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            return true;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return false;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>s;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=100;i++)
    {
        s.push_back(i*i);
    }
    for(auto i:a)
    {
        if(binary(s,i)==false)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    // for(auto i:s)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}
