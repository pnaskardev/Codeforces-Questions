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
    pair<int,int>server1(0,0);
    pair<int,int>server2(0,0);
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto i:arr)
    {
        if(i==1)
        {
            server1.first++;
        }
        else if(i==2)
        {
            server2.second++;
        }
        if(i==3)
        {
            server1.first++;
        }
    }
    cout<<max(server1.first,server2.first)<<endl;
}