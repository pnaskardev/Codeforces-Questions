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
    char arr[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool ans=true;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(arr[i][j]==arr[i][j+1])
            {
                ans=false;
                break;
            }
        }
        cout<<endl;
    }
    if(ans==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}