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
    int a=1;
    vector<vector<int>>arr(n+1,vector<int>(n+1));
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n==2)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int t=i+j;
            if(t%2==0)
            {
                arr[i][j]=a;
                a++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int t=i+j;
            if(t%2!=0)
            {
                arr[i][j]=a;
                a++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<endl;
}