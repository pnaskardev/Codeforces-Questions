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
    int s=2*n;
    vector<int>a(s);
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }   
    sort(a.begin(),a.end());
    int ans=a[n]-a[n-1];
    cout<<ans<<endl;
}