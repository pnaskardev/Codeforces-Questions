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
   int a,b;
   cin>>a>>b;
   if(a<b)
   {
       cout<<abs(b-a)<<endl;
       return;
   }
   else
   {
       if(a%b==0)
       {
           cout<<0<<endl;
           return;
       }
       cout<<abs(b-(a%b))<<endl;
   }
}