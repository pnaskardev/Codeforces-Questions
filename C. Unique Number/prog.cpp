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
    int x;
    cin>>x;
    int size=log10(x)+1;
    if(size==1)
    {
        cout<<x<<endl;
        return;
    }
    vector<int>ans;
    int sum=0;
    int j=9;
    while(j>=1 && sum<x)
    {
        ans.push_back(min(x-sum,j));
        sum+=j;
        j--;
    }
    sort(ans.begin(),ans.end());
    if(sum<x)
    {
        cout<<-1<<endl;
        return;
    }
    for(auto i:ans)
    {
        cout<<i;
    }
    cout<<endl;
}