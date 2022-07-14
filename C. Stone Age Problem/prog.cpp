#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int sum=0,current=-1;
map<int,int>mp;
void q1(vector<int>&arr);
void q2(vector<int>&arr);
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
void q1(vector<int>&arr)
{
    int idx,x;
    cin>>idx>>x;
    if(current==-1)
    {
        sum-=arr[idx-1];
        sum+=x;
        arr[idx-1]=x;
        cout<<sum<<endl;
    }
    else if(mp.find(idx)==mp.end())
    {
        sum-=current;
        sum+=x;
        cout<<sum<<endl;
        mp[idx]=x;
    }
    else
    {
        sum-=mp[idx];
        sum+=x;
        mp[idx]=x;
        cout<<sum<<endl;
    }
    
}
void q2(vector<int>&arr)
{
    int x;
    cin>>x;
    sum=x*arr.size();
    cout<<x*arr.size()<<endl;
    mp.clear();
    current=x;
}
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto i:arr)
    {
        sum+=i;
    }
    while(q--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            q1(arr);
        }
        else if(x==2)
        {
            q2(arr);
        }
    }

}