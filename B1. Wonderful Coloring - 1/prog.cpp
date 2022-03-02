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
    unordered_map<char,int>mp;
    unordered_map<char,int>::iterator it;
    for(auto i:s)
    {
        mp[i]++;
    }
    vector<char>ans;
    int counter=0;
    int r=0,b=0;
   for(auto i:mp)
   {
       if(i.second==1)
       {
           r++;
       }
       else if(i.second>=2)
       {
           b++;
       }
   }
    counter=b+r/2;
    cout<<counter<<endl;
}