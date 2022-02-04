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
    for(int i=2;i<=29;i++)
    {
        int t=(pow(2,i)-1);
        if(n%t==0)
        {
            cout<<n/t<<endl;
            break;
        }
    }
}