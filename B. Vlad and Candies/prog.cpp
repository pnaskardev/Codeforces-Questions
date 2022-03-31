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
    sort(arr.begin(),arr.end());
    bool ans=true;
    if(n>=2)
    {
        // for(int i=0;i<n-1;i++)
        // {
        //     if(abs(arr[i]-arr[i+1])>=2)
        //     {
        //         ans=false;
        //     }   
        // }
        if(abs(arr[n-1]-arr[n-2])>=2)
        {
            ans=false;
        }
        
    }
    else
    {
        if(arr[0]>=2)
        {
            ans=false;
        }
    }
    if(ans==false)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}