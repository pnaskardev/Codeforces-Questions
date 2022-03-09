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
    char a;
    cin>>a;
    vector<int>idx;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a)
        {
            idx.push_back(i);
        }
    }
    bool ans=false;
    for(auto i:idx)
    {
        if(i%2==0)
        {
            ans=true;
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

