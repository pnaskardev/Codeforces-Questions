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
    vector<string>big(n-2);
    for(auto &i:big)
    {
        cin>>i;
    }
    string s;
    s=big[0];
    bool found=false;
    for(int i=1;i<n-2;i++)
    {
        if(s.back()!=big[i].front())
        {
            found=true;
            s+=big[i];
        }
        else
        {
            s+=big[i].back();
        }
    }
    if(!found)
    {
        s+='a';
    }
    cout<<s<<endl;
}