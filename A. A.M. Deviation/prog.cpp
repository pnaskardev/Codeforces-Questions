#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int cal(int a1,int a2,int a3)
{
    return (a1+a3-2*a2);
}
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
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    vector<int>arr;
    arr.push_back(cal(a1++,a2--,a3));
    arr.push_back(cal(a1--,a2++,a3));
    arr.push_back(cal(a1++,a2,a3--));
    arr.push_back(cal(a1--,a2,a3++));
    arr.push_back(cal(a1,a2++,a3--));
    arr.push_back(cal(a1,a2--,a3++));
    arr.push_back(cal(a1,a2,a3));
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i:arr)
    // {
    //     if(i==0)
    //     {
    //         continue;
    //     }
    //     else if(i==3||i%3==0)
    //     {
    //         cout<<0<<endl;
    //     }
    //     else
    //     {
    //         cout<<1<<endl;
    //     }
    // }
    if((a1+a3-2*a2)%3==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}