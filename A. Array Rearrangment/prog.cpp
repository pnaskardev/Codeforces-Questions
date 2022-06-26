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
    vector<int>arr(n),brr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    sort(arr.begin(),arr.end());
    sort(brr.rbegin(),brr.rend());
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if((arr[i]+brr[i])>x)
        {
            ans=false;
        }
    }
    if(ans==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    // cout<<endl;
}