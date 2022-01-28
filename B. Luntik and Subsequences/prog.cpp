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
    int zero=0,one=0;
    for(auto i:arr)
    {
        if(i==0)
        {
            zero++;
        }
        if(i==1)
        {
            one++;
        }
    }
    cout<<((int)1<<zero)*one<<endl;
}