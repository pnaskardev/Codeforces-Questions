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
    vector<int>prefix={0},suffix={0};
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        prefix.push_back(sum);
    }
    sum=0;
    for(int i=n-1;i>=0;i--)
    {
        sum+=arr[i];
        suffix.push_back(sum);
    }
    // for(auto i:prefix)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i:suffix)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;
    bool res=false;
    for(int k=1;k<=n;k++)
    {
        if(2*k+1<=n)
        {
            if(prefix[k+1]<suffix[k])
            {
                res=true;
                break;
            }
        }
    }
    if(res==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}