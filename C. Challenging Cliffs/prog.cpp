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
    if(arr.size()==2)
    {
        cout<<arr[0]<<" "<<arr[1]<<endl;
        return;
    }
    bool duplicate=false;
    int dup=-1,minim=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(minim>abs(arr[i]-arr[i-1]))
        {
            duplicate=true;
            dup=i;
            minim=abs(arr[i]-arr[i-1]);
        }
    }
    for(int i=dup;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<dup;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}