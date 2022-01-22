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
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    r--;
    c--;
    int b_flag=0;
    vector<vector<char>>arr(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='B')
            {
                b_flag=1;
            }
        }
    }   
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    if(b_flag==0)
    {
        cout<<-1<<endl;
        return;
    }
    if(arr[r][c]=='B')
    {
        cout<<0<<endl;
        return;
    }
    int b_one=0;
    //searching for column
    for(int i=0;i<n;i++)
    {
        if(arr[i][c]=='B')
        {
            b_one=1;
            break;
        }
    }
    if(b_one==1)
    {
        cout<<1<<endl;
        return;
    }
    //seearching in the row
    int b_two=0;
    for(int i=0;i<m;i++)
    {
        if(arr[r][i]=='B')
        {
            b_two=1;
            break;
        }
    }
    if(b_two==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
}