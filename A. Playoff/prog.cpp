#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
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
    n=pow(2,n);
    int ans1,ans2,res;
    if(n>2)
    {
        ans1=min(n,n-1);
        ans2=ans1/2;
        // cout<<ans1<<" "<<ans2<<endl;
        res=ans1+ans2;
        if(res%2==0)
        {
            cout<<max(ans1,ans2)<<endl;
            return;
        }
        cout<<min(ans1,ans2)<<endl;
    }
    else
    {
        res=min(n,n-1);
        cout<<res<<endl;
    }
}