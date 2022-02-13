#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
void red(vector<vector<char>>&arr, int n,int m);
void white(vector<vector<char>>&arr, int n,int m);
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
    vector<vector<char>>arr(n,vector<char>(m));
    vector<vector<char>>arr1(n,vector<char>(m));
    vector<vector<char>>arr2(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    red(arr1,n,m);
    white(arr2,n,m);
    vector<pair<int,int>>r;
    vector<pair<int,int>>w;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='R')
            {
                r.push_back({i,j});
            }
            if(arr[i][j]=='W')
            {
                w.push_back({i,j});
            }
        }
    }
    bool ans1=true,ans2=true;
    for(auto i:r)
    {
        int x=i.first,y=i.second;
        if(arr[x][y]!=arr1[x][y])
        {
            ans1=false;
        }
    }
    for(auto i:w)
    {
        int x=i.first,y=i.second;
        if(arr[x][y]!=arr1[x][y])
        {
            ans1=false;
        }
    }
    
    
    for(auto i:r)
    {
        int x=i.first,y=i.second;
        if(arr[x][y]!=arr1[x][y])
        {
            ans1=false;
        }
    }
    for(auto i:w)
    {
        int x=i.first,y=i.second;
        if(arr[x][y]!=arr1[x][y])
        {
            ans1=false;
        }
    }
    
    for(auto i:r)
    {
        int x=i.first,y=i.second;
        if(arr[x][y]!=arr2[x][y])
        {
            ans2=false;
        }
    }
    for(auto i:w)
    {
        int x=i.first,y=i.second;
        if(arr[x][y]!=arr2[x][y])
        {
            ans2=false;
        }
    }

    if((ans1==true && ans2==false)||(ans1==false && ans2==true))
    {
        cout<<"YES"<<endl;
        if(ans1==true)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<arr1[i][j];
                }
                cout<<endl;
            }
            // cout<<endl;
        }
        else if(ans2==true)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<arr2[i][j];
                }
                cout<<endl;
            }
            // cout<<endl;
        }
        return;
    }   
    cout<<"NO"<<endl;
}
void red(vector<vector<char>>&arr, int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    arr[i][j]='R';
                }
                else
                {
                    arr[i][j]='W';
                }
            }
            else
            {
                if(j%2!=0)
                {
                    arr[i][j]='R';
                }
                else
                {
                    arr[i][j]='W';
                }
            }
        }
    }
}
void white(vector<vector<char>>&arr, int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    arr[i][j]='W';
                }
                else
                {
                    arr[i][j]='R';
                }
            }
            else
            {
                if(j%2!=0)
                {
                    arr[i][j]='W';
                }
                else
                {
                    arr[i][j]='R';
                }
            }
        }
    }
}