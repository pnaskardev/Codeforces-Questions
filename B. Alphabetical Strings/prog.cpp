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
    vector<pair<char,int>>arr(26);
    bool ans=true;
    for(int i=0;i<26;i++)
    {
        arr[i].first=i+97;
    }
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-97].second++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(arr[i].second==0 || arr[i].second>=2)
        {
            ans=false;
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}