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
    string s;
    vector<int>arr(n),final(n);
    vector<int>liked,disliked;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        final[i]=arr[i];
        mp[arr[i]]=i;
    }
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            disliked.push_back(arr[i]);
        }
        if(s[i]=='1')
        {
            liked.push_back(arr[i]);
        }
    }
    sort(liked.rbegin(),liked.rend());
    sort(disliked.rbegin(),disliked.rend());
    sort(arr.rbegin(),arr.rend());
    int i;
    for(i=0;i<liked.size();i++)
    {
        final[mp[liked[i]]]=arr[i];
    }
    for(int j=0;j<disliked.size();j++)
    {
        final[mp[disliked[j]]]=arr[i];
        i++;
    }
    for(auto i:final)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}