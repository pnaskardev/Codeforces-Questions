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
    set<int>s;
    for(auto i:arr)
    {
        s.insert(i);
    } 
    if((n-s.size())%2==0)
    {
        cout<<s.size()<<endl;
    }
    else
    {
        cout<<s.size()-1<<endl;
    }
}