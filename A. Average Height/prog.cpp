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
    vector<int>a(n);
    vector<int>o;
    vector<int>e;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(auto i:a)
    {
        if(i%2==0)
        {
            e.push_back(i);
        }
        else
        {
            o.push_back(i);
        }
    }
    for(auto i:o)
    {
        cout<<i<<" ";
    }
    for(auto i:e)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}