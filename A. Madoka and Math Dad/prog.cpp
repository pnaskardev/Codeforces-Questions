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
    int sum1=0,sum2=0;
    vector<int>res1;
    vector<int>res2;
    while(sum1<=1000)
    {
        sum1+=3;
        res1.push_back(1);
        res1.push_back(2);
    }
    while(sum2<=1000)
    {
        sum2+=3;
        res2.push_back(2);
        res2.push_back(1);
    }
    sum1=sum2=0;
    int ans1=-1;
    int ans2=-1;
    for(int i=0;i<res1.size();i++)
    {
        sum1+=res1[i];
        if(sum1==n)
        {
            ans1=i;
            break;
        }
    }
    
    for(int i=0;i<res2.size();i++)
    {
        sum2+=res2[i];
        if(sum2==n)
        {
            ans2=i;
            break;
        }
    }
    // cout<<ans1<<" "<<ans2<<endl;
    if(ans1!=-1 && ans2==-1)
    {
        for(int i=0;i<=ans1;i++)
        {
            cout<<res1[i];
        }
        cout<<endl;
    }
    else if(ans2!=-1 && ans1==-1)
    {
        for(int i=0;i<=ans2;i++)
        {
            cout<<res2[i];
        }
        cout<<endl;
    }
    else 
    {
        if(ans1>ans2)
        {
            for(int i=0;i<=ans1;i++)
            {
                cout<<res1[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<=ans2;i++)
            {
                cout<<res2[i];
            }
            cout<<endl;
        }
    }
}