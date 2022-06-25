#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
int numPlaces (int n) 
{
    if (n == 0) return 1;
    return floor (log10 (abs (n))) + 1;
}
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
    int n,number;
    cin>>n>>number;
    int pal=0,pal2=0,temp=n;
    while(temp--)
    {
        pal=pal*10+9;
    }
    temp=n+1;
    while(temp--)
    {
        pal2=pal2*10+1;
    }
    // cout<<pal<<" "<<pal2<<endl;
    int t=abs(pal-number);
    int l=numPlaces(t);
    // cout<<l<<endl;
    if(l!=n)
    {
        cout<<pal2-number<<endl;
    }
    else
    {
        cout<<pal-number<<endl;
    }
}
