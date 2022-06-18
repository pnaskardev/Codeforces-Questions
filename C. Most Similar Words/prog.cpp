#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int cost(string s1,string s2);
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
    int n,m;
    cin>>n>>m;
    vector<string>arr;
    while(n--)
    {
        string s;
        cin>>s;
        arr.push_back(s);
    }   
    int ans=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            ans=min(ans,cost(arr[i],arr[j]));
        }
    }
    cout<<ans<<endl;
}

int cost(string s1,string s2)
{
    int val=0;
    for(int i=0;i<s1.size();i++)
    {
        val += abs(s1[i] - s2[i]);
    }
    return val;
}