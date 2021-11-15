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
    vector<pair<int,int>>arr(n+1);
    arr[0].first=0;
    arr[0].second=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    vector<int>tm(n+2);
    tm[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>tm[i];
    }
    tm[n+1]=0;
    int sum=0;
    vector<pair<int,int>>total(n+1);
    total[0].first=0;
    total[0].second=0;
    for(int i=1;i<=n;i++)
    {
        if(tm[i]==0)
        {
            total[i].first=arr[i].first;
            int min_time=ceil((arr[i].second-arr[i].first)/2.0);
            if(min_time<(arr[i].second-arr[i].first))
            {
                total[i].second=arr[i].first+min_time;
            }
            else
            {
                total[i].second=arr[i].second;
            }
        }
        else if(tm[i]>0)
        {
            total[i].first=arr[i].first+tm[i];
            // arr[i].first+=tm[i];
            int late_arr=arr[i].first+tm[i];
            int min_time=ceil((arr[i].second-arr[i].first)/2.0);
            if(min_time<(arr[i].second-arr[i].first))
            {
                total[i].second=arr[i].second;
                tm[i+1]+=late_arr+min_time-arr[i].second;
            }
            else
            {
                total[i].second=total[i].first+min_time;
                tm[i+1]+=late_arr+min_time-arr[i].second;
            }
        }
    }
    cout<<total[n].first<<endl;
}