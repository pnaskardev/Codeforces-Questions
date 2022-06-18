#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
    int sum1=0,sum2=0,i=0;
    for(i=0;i<3;i++)
    {
        sum1+=s[i]-'0';
    }
    // cout<<i<<endl;
    for(i=3;i<s.size();i++)
    {
        sum2+=s[i]-'0';
    }
    if(sum1==sum2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}