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
    int n,x;
    cin>>n>>x;
    vector<int>arr(2*n),vec1,vec2;
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if((arr[n+i]-arr[i])<x)
        {
            ans=false;
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}