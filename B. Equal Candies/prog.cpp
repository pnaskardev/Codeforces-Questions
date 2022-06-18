#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
    int minim=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minim=min(minim,arr[i]);
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>minim)
        {
            counter+=arr[i]-minim;
        }
    }
    cout<<counter<<endl;
}