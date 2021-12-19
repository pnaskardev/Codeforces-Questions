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
    vector<int>ans;
    if(n%2==0)
    {
        int i=0,j=arr.size()-1;
        while(i<j)
        {
            ans.push_back(arr[i]);
            i++;
            ans.push_back(arr[j]);
            j--;
        }
    }
    else
    {
        int i=0,j=arr.size()-1;
        while(i<=j)
        {
            ans.push_back(arr[i]);
            i++;
            ans.push_back(arr[j]);
            j--;
        }
    }
    if(n%2==1)
    {
        ans.pop_back();
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}   