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
    vector<bool>present(n+1,false);
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        // if(arr[i]<=n)
        // {
        //     present[arr[i]]=true;
        // }
    }
    sort(arr.rbegin(),arr.rend());
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        while(arr[i]>n || present[arr[i]]==true )
        {
            arr[i]=arr[i]/2;
        }
        if(arr[i]>0)
        {
            present[arr[i]]=true;
        }
        else 
        {
            // cout<<arr[i]<<endl;
            ans=false;
        }
    }
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    if(ans==false)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}