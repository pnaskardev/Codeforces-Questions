#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    vector<int>arr(n),pos,neg,a;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort(arr.begin(),arr.end());
    for(auto i:arr)
    {
        if(i<0)
        {
            neg.push_back(i);
        }
        else if(i>0)
        {
            pos.push_back(i);
        }
        else
        {
            if(a.size()<2)
            {
                a.push_back(i);
            }
            // a.push_back(i);
        }
    }
    if(pos.size()>2 || neg.size()>2)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(auto i:neg)
    {
        a.push_back(i);
    }
    for(auto i:pos)
    {
        a.push_back(i);
    }
    unordered_map<int,int>mp;
    for(auto i:a)
    {
        mp[i]++;
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            for(int k=j+1;k<a.size();k++)
            {
                bool ans=false;
                if(mp.find(a[i]+a[j]+a[k])!=mp.end())
                {
                    ans=true;
                }
                if(ans!=true)
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}