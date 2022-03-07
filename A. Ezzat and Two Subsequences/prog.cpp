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
    int div=arr.size()/2;
    int sum=0;
    double ans=0;
    int maxim=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxim=max(arr[i],maxim);
    }   
    ans=1.0*(sum-maxim)/(n-1)+maxim;
    std::cout << std::setprecision(9) << std::fixed<<ans<<endl;
}