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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    vector<int>o,e;
    for(auto i:arr)
    {
        if(i%2==0)
        {
            o.push_back(i);
        }
        else 
        {
            e.push_back(i);
        }
    }   
    if(is_sorted(e.begin(),e.end())==true && is_sorted(o.begin(),o.end())==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}