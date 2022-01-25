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
    int n;
    cin>>n;
    vector<int>arr(n),ans1,ans2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // first 1 occurs and then 2 occurs 
    int flag=0;
    int one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(flag==0)
        {
            one=0;
            two=0;
        }
        if(arr[i]==1 && flag==0)
        {
            flag=1;
        }
        if(flag==1 && arr[i]==2)
        {
            two++;
        }
        if(flag==1 && arr[i]==1 && two>0)
        {
            ans1.push_back(min(one,two));
            flag=0;
        }
        if(flag==1 && arr[i]==1)
        {
            one++;
        }
        // cout<<one<<" "<<two<<endl;
    }
    ans1.push_back(min(one,two));
    flag=0;
    one=0;
    two=0;
    // first two occurs and one occurs 
    for(int i=0;i<n;i++)
    {
        if(flag==0)
        {
            one=0;
            two=0;
        }
        if(arr[i]==2 && flag==0)
        {
            flag=1;
        }
        if(flag==1 && arr[i]==1)
        {
            one++;
        }
        if(flag==1 && arr[i]==2 && one>0)
        {
            ans2.push_back(min(one,two));
            flag=0;
        }
        if(flag==1 && arr[i]==2)
        {
            two++;
        }
    }
    cout<<max(*max_element(ans1.begin(),ans1.end()),*max_element(ans2.begin(),ans2.end()))*2<<endl;
}