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
    vector<string>arr{"YES","yES","yeS","yes","Yes","YeS","yEs","YEs"};
    string n;
    cin>>n;
    bool ans=false;
    for(auto i:arr)   
    {
        if(n==i)
        {
            ans=true;
            break;
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