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
    int a,b,c;
    set<int>used;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && !used.count(i))
        {
            n=n/i;
            used.insert(i);
            a=i;
            break;
        }
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0 && !used.count(i))
        {
            n=n/i;
            used.insert(i);
            b=i;
            break;
        }
    }
    c=n;
    if(used.size()<2 || used.count(n) || n==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}