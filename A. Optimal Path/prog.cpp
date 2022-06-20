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
    int n,m;
    cin>>n>>m;
    // vector<vector<int>>arr(n,vector<int>(m));
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         arr[i-1][j-1]=(i-1)*m+j;
    //     }
    // }
    int sum=0;
    // for(int j=0;j<m;j++)
    // {
    //     sum+=arr[0][j];
    // }
    // for(int i=1;i<n;i++)
    // {
    //     sum+=arr[i][m-1];
    // }
    int counter=1;
    for(int i=1;i<=m;i++)
    {
        sum+=counter;
        counter++;
    }
    counter--;
    for(int i=2;i<=n;i++)
    {
        counter+=m;
        sum+=counter;
    }
    // cout<<counter<<endl;
    cout<<sum<<endl;
}