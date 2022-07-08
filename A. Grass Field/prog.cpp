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
    int n=2;
    vector<vector<int>>arr(2,vector<int>(2));
    int zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // cin>>arr[i][j];
            // cout<<arr[i][j]<<" ";
            if(arr[i][j]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        // cout<<endl;
    }
    if(one==4)
    {
        cout<<2<<endl;
    }
    else if(one>0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}