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
    int mul=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           
            while(arr[i]%2==0)
            {
                arr[i]=arr[i]/2;
                mul=mul*2;
            }
        }
    }
    sort(arr.begin(),arr.end());
    arr[n-1]=arr[n-1]*mul;
    int sum=0;
    for(auto i:arr)
    {
        // cout<<i<<" ";
        sum+=i;
    }
    // cout<<endl;
    cout<<sum<<endl;
}