#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int sq(int n);
int cu(int n);
#define m 1e9;
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
    int c=0;
    int p=(int)sqrt(n);
    int q=(int)cbrt(n);
    bool flag=true;
    int i=1;
    while(flag==true)
    {
        if(pow(i,6)<=n)
        {
            c++;
        }
        i++;
        if(pow(i,6)>n)
        {
            flag=false;
        }
    }
    cout<<p+q-c<<endl;
}
