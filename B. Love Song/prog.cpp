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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int>arr(n+1);
    arr[0]=0;
    for(int i=1;i<n+1;i++)
    {
        arr[i]=arr[i-1]+(s[i-1]-'a'+1);
        // cout<<s[i-1]-'a'+1<<endl;
    }
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;
    }
}