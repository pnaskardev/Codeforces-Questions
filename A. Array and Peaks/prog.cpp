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
    if((n-k)<=k)
    {
        cout<<-1<<endl;
        return;
    }
    stack<int>st;
    for(int i=n-k+1;i<=n;i++)
    {
        st.push(i);
    }
    for(int i=1;i<=(n-k);i++)
    {
        cout<<i<<" ";
        if(st.size()>0)
        {
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    cout<<endl;
}