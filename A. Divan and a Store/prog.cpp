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
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    sort(a.begin(),a.end());
    for(auto i:a)
    {
        if(i>=l &&i<=r )
        {
            if( k>=i &&(k-i)>=0)
            {
                count++;
                k=k-i;
            }
            
        }
    }
    cout<<count<<endl;
}