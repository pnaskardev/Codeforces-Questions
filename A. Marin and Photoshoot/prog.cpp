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
    string s;
    cin>>n>>s;
    vector<int>arr;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            arr.push_back(i);
        }
    }  
    if(arr.size()<=1)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i+1]-arr[i] <=2)
        {
            ans+=2-(arr[i+1]-arr[i])+1;
        }
    }
    cout<<ans<<endl;
}