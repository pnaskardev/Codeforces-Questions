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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    vector<int>temp=arr;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
        for(int j=n;j>=1;j--)
        {
            if(i!=j)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}