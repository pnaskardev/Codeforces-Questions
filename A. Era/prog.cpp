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
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int count=0;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        p.push_back(make_pair(arr[i],i+1));
    }
    for(int i=0;i<p.size();i++)
    {
        if(p[i].second<p[i].first)
        {
            count+=abs(p[i].second-p[i].first);
            int curr=abs(p[i].second-p[i].first);
            int j=i;
            while(j<p.size())
            {
                p[j].second+=curr;
                j++;
            }
        }
    }
    cout<<count<<endl;
}