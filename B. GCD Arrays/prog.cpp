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
   int l,r,k;
   cin>>l>>r>>k;
   int left=l;
   int right=r;
   if(left!=right && k==0)
   {
       cout<<"NO"<<endl;
       return;
   }
   if(left==right && left!=1 )
   {
       cout<<"YES"<<endl;
       return;
   }
   if(left==right && left==1 )
   {
       cout<<"NO"<<endl;
       return;
   }
   if(right%2!=0)
   {
       right++;
   }
   if(left%2!=0)
   {
       left--;
   }
   int odd_integers=(right-left)/2;
   int even_integers=r-odd_integers;
   if(k<odd_integers)
   {
       cout<<"NO"<<endl;
       return;
   }
   cout<<"YES"<<endl;
}