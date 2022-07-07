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
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    unordered_map<int,int>mp;
    for(auto i:arr)
    {
        mp[i]++;
    }
    int total=ceil(n/2);
    // cout<<"total->"<<total<<endl;
    // for(auto i:mp)
    // {
    //     cout<<i.first<<"->"<<i.second<<endl;
    // }
    int counter=0,ans=0;
    for(auto i:mp)
    {
        counter+=i.second%2;
        ans+=i.second/2*2;
        // if(i.second%2==0)
        // {
        //     counter+=i.second/2;
        //     ans+=i.second/2*2;
        // }
        // else
        // {
        //     counter+=(i.second/2);
        //     ans+=i.second/2*2;
        // }
    }
    // cout<<counter<<endl;
    ans+=ceil(counter/2.0);
    cout<<ans<<endl;
}