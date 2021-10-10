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
    char arr[2][n];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
    int i=0,j=0;
    while(i<2 && j<n)
    {
        // cout<<i<<" "<<j<<endl;
        if(j<n-1 && arr[i][j+1]=='0')  
        {
            j++;
        }
        else if(i<1 && arr[i+1][j]=='0')
        {
            i++;
        }
        else if(i<1 && j<n-1 && arr[i+1][j+1]=='0'  )
        {
            i++;
            j++;
        }
        else if(j<n-1 && arr[i-1][j+1]=='0' )
        {
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    // cout<<i<<" "<<j<<endl;
    if(i==1 && j==n-1)
    {
        cout<<"YES"<<endl;
    }
    else if(i==0 && j==n-1 && arr[i+1][j]=='0')
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}