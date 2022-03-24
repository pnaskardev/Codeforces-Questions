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
    int n=3;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    double ans=0.0;
    int x1=-1,x2=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i].second==arr[j].second)
                {
                    x1=i,x2=j;
                    break;
                }
            }
        }
    }
    bool res=true;
    // cout<<x1<<" "<<x2<<endl;
    for(int k=0;k<n;k++)
    {
        if(k!=x1 && k!=x2)
        {
            if(arr[k].second<arr[x1].second || arr[k].second<arr[x2].second)
            {
                res=false;
            }
        }
    }
    if(res==true)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<abs(arr[x1].first-arr[x2].first)<<endl;
    }
}