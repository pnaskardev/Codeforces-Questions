#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int t=1<<(n/2);
        cout<<t<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

}