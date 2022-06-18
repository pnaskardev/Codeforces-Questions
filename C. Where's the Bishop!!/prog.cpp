#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
    vector<vector<char>>arr(8,vector<char>(8));
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            if(arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j+1]=='#' && arr[i+1][j-1]=='#')
            {
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }



}