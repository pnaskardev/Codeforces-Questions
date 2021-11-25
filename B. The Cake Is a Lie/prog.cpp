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
    int n,m,k;
    cin>>n>>m>>k;
    int i=1,j=1,moves=0;
    while(i<n)
    {
        i++;
        moves++;
    }
    while(j<m)
    {
        moves+=i;
        j++;
    }
    // cout<<moves<<endl;
    if(moves==k)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
}