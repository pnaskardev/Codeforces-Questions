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
    int arr[2][n];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool t=true;
    for(int i=0;i<n;i++)
    {
        int j=1;
        if(arr[0][i]==1 && arr[1][i]==1)
        {
            t=false;
        }
    }
    if(t==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}