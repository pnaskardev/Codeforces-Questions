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
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int w,b;
    cin>>w>>b;
    int total_cells=2*n;
    int white_cells=k1+k2;
    int black_cells=total_cells-white_cells;
    if(white_cells>=w*2 && black_cells>=b*2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}