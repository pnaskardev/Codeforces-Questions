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
    int n=7;
    vector<int>arr;
    while(n--)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int sum=0;
    int final=arr[arr.size()-1];
    if((arr[0]+arr[1]+arr[2])==final)
    {
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
    else
    {
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
    }
}