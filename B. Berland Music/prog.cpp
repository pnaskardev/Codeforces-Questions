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
    string s;
    cin>>s;
    int z=0,o=0;
    for(auto i:s)
    {
        if(i=='0')
        {
            z++;
        }
        else if(i=='1')
        {
            o++;
        }
    }
    if(o==n ||z==n)
    {
        for(auto i:arr)
        {
            cout<<i<<" ";
        }
         cout<<endl;
        return;
    }
    sort(arr.begin(),arr.end());
    deque<int>q;
    deque <int> :: iterator it;
    for(auto i:arr)
    {
        q.push_back(i);
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ans.push_back(q.front());
            q.pop_front();
        }
        else if(s[i]=='1')
        {
            ans.push_back(q.back());
            q.pop_back();
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return;
}