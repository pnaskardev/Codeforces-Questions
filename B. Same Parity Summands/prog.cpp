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
    int n,k;
    cin>>n>>k;
    int ans=n-(k-1);
    if(ans%2==1 && ans>0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++)
        {
            cout<<"1 ";
        }
        cout<<ans<<endl;
        return;
    }
    ans=n-2*(k-1);
    if(ans>0 && ans%2==0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++)
        {
            cout<<"2 ";
        }
        cout<<ans<<endl;
        return;
    }
    cout<<"NO"<<endl;
}