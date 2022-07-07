#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();

}
void solve()
{
    string s,temp;
    cin>>s;
    unordered_map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            temp+=s[i];
        }
    }
    // if we check for sorted the "ac" and "ab" these wil also pass
    // we have to check that the string looks like "abc"
    if(temp!="abc")
    {
        cout<<"NO"<<endl;
        return;
    }
    if(mp['a']==mp['c'] || mp['b']==mp['c'])
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
   
}