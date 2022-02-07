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
        cin>>arr[i];
    }   
    int minim=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minim=min(arr[i],minim);
    }
    int c=0;
    for(auto i:arr)
    {
        if(i==minim)
        {
            c++;
        }
    }
    cout<<n-c<<endl;
}