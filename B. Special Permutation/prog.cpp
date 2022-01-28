#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int maxim(vector<int>arr,int start,int end);
int minim(vector<int>arr,int start,int end);
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
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>arr;
    arr.push_back(a);
    for(int i=n;i>0;i--)
    {
        if(i!=a && i!=b)
        {
            arr.push_back(i);
        }
    }
    arr.push_back(b);
    int l_min=minim(arr,0,(n/2)-1);
    int r_max=maxim(arr,(n/2),n-1);
    // cout<<l_min<<" "<<r_max<<endl;
    if(l_min!=a || r_max!=b)
    {
        cout<<-1<<endl;
        return;
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // cout<<endl;
}
int maxim(vector<int>arr,int start,int end)
{
    int max_el=INT_MIN;
    for(int i=start;i<=end;i++)
    {
        max_el=max(arr[i],max_el);
    }
    return max_el;
}
int minim(vector<int>arr,int start,int end)
{
    int min_el=INT_MAX;
    for(int i=start;i<=end;i++)
    {
        min_el=min(arr[i],min_el);
    }
    return min_el;
}
