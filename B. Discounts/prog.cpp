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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>q(m);
    for(int i=0;i<m;i++)
    {
        cin>>q[i];
    }
    sort(a.rbegin(),a.rend());
    int sum=0;
    vector<int>pref(n);
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        pref[i]=sum;
    }
    int i,j;
    for(int p=0;p<m;p++)
    {
        int sum1=0,sum2=0;
        i=0,j=q[p]+i-1;
        sum1=pref[pref.size()-1]-pref[j];
        j--;
        sum2=pref[j];
        cout<<sum1+sum2<<endl;
    }
    // for(auto i:a)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i:pref)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;
}