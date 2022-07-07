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
    if(total%2==0)
    {
        for(auto i:mp)
        {
            if(counter==total)
            {
                break;
            }
            if(i.second%2==0)
            {
                counter+=i.second/2;
                ans+=i.second;
            }
            else
            {
                counter+=ceil(i.second/2.0);
                ans+=i.second+1;
            }
        }
    }
    else
    {
        for(auto i:mp)
        {
            if(counter+1>=total)
            {
                break;
            }
            if(i.second%2==0)
            {
                counter+=i.second/2;
                ans+=i.second;
            }
            else
            {
                counter+=ceil(i.second/2.0);
                ans+=i.second+1;
            }
        }
        counter++;
        ans++;
    }
    // cout<<counter<<endl;
    cout<<ans<<endl;
}