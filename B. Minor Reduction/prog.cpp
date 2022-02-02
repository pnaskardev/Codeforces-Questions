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
    string s;
    cin>>s;
    vector<int>arr;
    for(int i=0;i<s.size();i++)
    {
        arr.push_back(s[i]-'0');
    }
    int n=arr.size();
    bool flag=false;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]+arr[i+1]>=10)
        {
            arr[i+1]=arr[i+1]+arr[i]-10;
            arr[i]=1;
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<(arr[1]+arr[0]);
        for(int i=2;i<n;i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
    else
    {
        for(auto i:arr)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
}