#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // srand(time(0));
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    // cout<<rand()%100<<endl;
    // cout<<rand()%1000<<endl;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==2)
    {
        if(s[0]>=s[1])
        {
            cout<<"NO"<<endl;
            return;
        }
        // else
        // {
        //     cout<<"YES"<<endl;
        //     cout<<2<<endl;
        //     cout<<s[0]<<" "<<s.substr(1)<<endl;
        //     return;
        // }
    }
    cout<<"YES"<<endl;
    cout<<2<<endl;
    cout<<s[0]<<" "<<s.substr(1)<<endl;
}