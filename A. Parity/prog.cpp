#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    solve();
}
void solve()
{   
    int b,k;
    cin>>b>>k;
    vector<bool>dp(k,false);
    vector<int>arr(k);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    if(b%2==0)
    {
        if(arr[k-1]%2==0)
        {
            cout<<"even"<<endl;
            return;
        }
        else 
        {
            cout<<"odd"<<endl;
            return;
        }
    }
    for(int i=0;i<k;i++)
    {
        
        if(b%2!=0)
        {
            if(arr[i]%2!=0)
            {
                continue;
            }
            else
            {
                dp[i]=true;
            }
        }
    }
    int odd=0;
    for(auto i:dp)
    {
        if(i==0)
        {
            odd++;
        }
    }
    if(odd%2==0)
    {
        cout<<"even"<<endl;
        return;
    }
    cout<<"odd"<<endl;
}   