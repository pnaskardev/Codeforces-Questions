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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    queue<int>q;
    for(auto i:a)
    {
        q.push(i);
    }
    vector<int>ans(n+1);
    while(q.size()>0)
    {
        pair<int,int>p=q.front();
        ans[p.first-1]=p.second;
        q.pop();
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}