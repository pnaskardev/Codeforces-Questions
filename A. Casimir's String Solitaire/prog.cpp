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
    int a_c=0,b_c=0,c_c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            a_c++;
        }
        if(s[i]=='B')
        {
            b_c++;
        }
        if(s[i]=='C')
        {
            c_c++;
        }
    }
    
}