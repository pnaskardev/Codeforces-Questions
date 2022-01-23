#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
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
    int i=0,j=arr.size()-1,ans=0;
    while(i<j)
    {
        // ans+=((arr[i]*arr[i])+(arr[j]*arr[j]));
        ans+=(arr[i]+arr[j])*(arr[i]+arr[j]);
        i++;
        j--;
    }
    cout<<ans<<endl;
}