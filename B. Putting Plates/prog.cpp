#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
void top_row(vector<vector<int>>&arr,int h,int w);
void right_col(vector<vector<int>>&arr,int h,int w);
void bottom_row(vector<vector<int>>&arr,int h,int w);
void left_col(vector<vector<int>>&arr,int h,int w);
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int w,h;
    cin>>h>>w;
    vector<vector<int>>arr(h,vector<int>(w));
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            arr[i][j]=0;
        }
    }
    top_row(arr,h,w);
    right_col(arr,h,w);
    bottom_row(arr,h,w);
    left_col(arr,h,w);
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
void top_row(vector<vector<int>>&arr,int h,int w)
{
    int i=0;
    for(int j=0;j<=w-1;j+=2)
    {
        if(j+1==w)
        {
            arr[i][j]=1;
        }
        else
        {
            arr[i][j]=1;
            arr[i][j+1]=0;
        }
    }
}
void right_col(vector<vector<int>>&arr,int h,int w)
{
    int numa=0,numb=1;
    int j=w-1,i=0;
    if(arr[0][w-1]==0)
    {
        numa=0;
        numb=1;
    }
    else 
    {
        swap(numa,numb);
    }
    for(i=0;i<=h-1;i+=2)
    {
        if(i+1==h)
        {
            arr[i][j]=numa;
        }
        else
        {
            arr[i][j]=numa;
            arr[i+1][j]=numb;
        }
    }
}

void bottom_row(vector<vector<int>>&arr,int h,int w)
{
    int numa=0,numb=1;
    int j=w-1,i=h-1;
    if(arr[i][j]==0)
    {
        numa=0;
        numb=1;
    }
    else 
    {
        swap(numa,numb);
    }
    for(j;j>=0;j-=2)
    {
        if(j-1==-1)
        {
            arr[i][j]=numa;
        }
        else
        {
            arr[i][j]=numa;
            arr[i][j-1]=numb;
        } 
    }
}
void left_col(vector<vector<int>>&arr,int h,int w)
{
    int a=0,b=0;
    if(arr[0][0]==1)
    {
        a=1;
    }
    if(arr[h-1][0]==1)
    {
        b==1;
    }
    int req=ceil(h/2.0);
    int c=a+b;
    req-=c;
    if(req>0)
    {
    }
}