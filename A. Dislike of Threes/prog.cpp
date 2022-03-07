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
    int n=1e5;
    vector<int>arr;
    for(int i=1;i<n;i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            arr.push_back(i);
        }
        else
        {
            continue;
        }
    }
    int p;
    cin>>p;
    cout<<arr[p-1]<<endl;
}