#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    int l,u;
    cin>>l>>u;
    vector<int>arr;
    for(int i=l;i<=u;i++)
    {
        int n=i;
        string s=to_string(n);
        unordered_map<char,int>mp;
        for(auto j:s)
        {
            mp[j]++;
        }
        bool ans=true;
        for(auto j:mp)
        {
            if(j.second>=2)
            {
                ans=false;
                continue;
            }
        }
        if(ans==true)
        {
            arr.push_back(i);
        }
    }
    if(arr.size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<arr[0]<<endl;
    }
}