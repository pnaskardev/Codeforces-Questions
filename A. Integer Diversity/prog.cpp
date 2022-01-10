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
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[abs(arr[i])]++;
    }
    int ans=0;
    for(auto i:mp)
    {
        if(i.first==0)
        {
            ans++;
        }
        else if(i.second>=2)
        {
            ans+=2;
        }
        else
        {
            ans+=1;
        }
    }
    cout<<ans<<endl;
}