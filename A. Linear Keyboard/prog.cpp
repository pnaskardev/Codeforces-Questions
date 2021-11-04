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
    string keyboard;
    cin>>keyboard;
    string word;
    cin>>word;
    unordered_map<char,int>mp;
    unordered_map<char,int>::iterator it;
    for(int i=0;i<keyboard.size();i++)
    {
    
        mp[keyboard[i]]=i;
        // cout<<keyboard[i]<<"->"<<i+1<<endl;
    }
    int ans=0;
    int arr[word.size()];
    for(int i=0;i<word.size();i++)
    {
        it=mp.find(word[i]);
        arr[i]=it->second;
    }
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<word.size()-1;i++)
    {
        int j=i+1;
        ans+=abs(arr[j]-arr[i]);
    }
    cout<<ans<<endl;
}