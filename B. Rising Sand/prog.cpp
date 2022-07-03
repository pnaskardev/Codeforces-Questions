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
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    int counter=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1]+arr[i+1])
        {
            counter++;
        }
    }
    if(k==1)
    {
        if(n&1==1)
        {
            cout<<n/2<<endl;
        }
        else
        {
            cout<<(n/2)-1<<endl;
        }
        return;
    }
    cout<<counter<<endl;
}