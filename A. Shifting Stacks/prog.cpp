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
    vector<int>arr;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int sum=0,need=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        need+=i;
         if(sum<need)
        {
            cout<<"NO"<<endl;
            return;
        }
        
    }
    cout<<"YES"<<endl;
}