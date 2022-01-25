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
    int n,v;
    cin>>n>>v;
    vector<int>arr(n+1,0);
    int i=1;
    int sum=v-1;
    if(n-1<v)
    {
        cout<<n-1<<endl;
        return;
    }
    for(i;i<=n-v;i++)
    {
        sum+=i;
        // cout<<sum<<endl;
    }
    cout<<sum<<endl;
}