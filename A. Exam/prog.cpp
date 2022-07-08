#include<iostream>
#include<bits/stdc++.h>
// #define int long long int
using namespace std;
void solve();
int main(void)
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
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    vector<int>arr(n),odd,even,ans;
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(auto i:arr)
    {
        if(i%2==0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    if(even.size()>odd.size())
    {
        for(auto i:even)
        {
            ans.push_back(i);
        }
        for(auto i:odd)
        {
            ans.push_back(i);
        }
        int t=abs(even[even.size()-1]-odd[0]);
        if(t==1)
        {
            ans.pop_back();
        }
    }
    else if(odd.size()>even.size())
    {
        for(auto i:odd)
        {
            ans.push_back(i);
        } 
        for(auto i:even)
        {
            ans.push_back(i);
        }
        int t=abs(odd[odd.size()-1]-even[0]);
        if(t==1)
        {
            ans.pop_back();
        }
    }
    else
    {
        for(int i=1;i<odd.size();i++)
        {
            int t=odd[i];
            odd[i]=odd[i-1];
            odd[i-1]=t;
        }
        for(int i=1;i<even.size();i++)
        {
            int t=even[i];
            even[i]=even[i-1];
            even[i-1]=t;
        }
        for(auto i:odd)
        {
            ans.push_back(i);
        }
        for(auto i:even)
        {
            ans.push_back(i);
        }
        int t=abs(odd[odd.size()-1]-even[0]);
        if(t==1)
        {
            ans.pop_back();
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}