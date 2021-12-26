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
    string s;
    cin>>s;
    int c=0;
    for(auto i:s)
    {
        if(i=='N')
        {
            c++;
        }
    }
    if(c==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}