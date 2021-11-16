#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=arr[n-1];
    for(int i=arr.size()-1;i>=0;i--)
    {
        
        if(j!=0 || arr[i]!=0)
        {
            ans[i]=1;
            j=max(j,arr[i]);
            j--;
        }
        else
        {
            j=arr[i];
        }
    }
    for(auto i:ans)
    {
        // if(i==0)
        // {
        //     cout<<i<<" ";
        // }
        // else
        // {
        //     cout<<1<<" ";
        // }
        cout<<i<<" ";
    }
    cout<<endl;
}