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
    int a,b;
    cin>>a>>b;
    for(int i=0;i<min(a,b);i++)
    {
        cout<<"01";
    }
    for(int i=0;i<abs(a-b);i++)
    {
        cout << (a < b ? 1 : 0);
    }
    cout<<endl;
}