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
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max((long long)0,max(b,c)+1-a)<<" "<<max((long long) 0,max(a,c)+1-b)<<" "<<max((long long)0,max(a,b)+1-c);
    cout<<endl;
}