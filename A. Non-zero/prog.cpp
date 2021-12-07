#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool product(vector<int>arr);
bool sum(vector<int>arr);
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
    unordered_map<int,int>mp;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    for(auto i:arr)
    {
        mp[i]++;
    }
    int ans=0;
    bool p=product(arr);
    bool s=sum(arr);
    if(p==true && s==false)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                arr[i]++;
                ans++;
            }
        }
        if(sum(arr)==true)
        {
            ans+=1;
        }
        cout<<ans<<endl;
        return;
    }
    if(s==true && p==false)
    {
        ans+=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr[i]++;
            }
            break;
        }
        if(p==true)
        {
            it=mp.find(0);
            ans+=it->second;
        }
        cout<<ans<<endl;
        return;
    }
    if(s==true && p==true)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                arr[i]++;
                ans++;
            }
        }
        if(sum(arr)==true)
        {
            ans+=1;
        }
        cout<<ans<<endl;
        return;
    }
    cout<<ans<<endl;
    return;
}
bool product(vector<int>arr)
{
    int p=1;
    for(auto i:arr)
    {
        p=p*i;
    }
    if(p==0)
    {
        return true;
    }
    return false;
}
bool sum(vector<int>arr)
{
    int sum=0;
    for(auto i:arr)
    {
        sum+=i;
    }
    if(sum==0)
    {
        return true;
    }
    return false;
}