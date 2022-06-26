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
    // solve();
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
    // vector<int>ones(n);
    int minim=-1;
    int maxim=-1;
    bool pos=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos=true;
            minim=i;
            break;
        }
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]>0)
        {
            pos=true;
            maxim=i;
            break;
        }
    }
    int counter=0;
    if(pos==true)
    {
        // cout<<minim<<" "<<maxim<<endl;
        bool flag=false;
        
        for(int i=minim;i<=maxim;i++)
        {
            if(flag==false && arr[i]<1)
            {
                flag=true;
                counter++;
            }
            if(flag==true && arr[i]<1)
            {
                continue;
            }
        }
    }
    
    if(pos==false)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<counter+1<<endl;
    }
    
}