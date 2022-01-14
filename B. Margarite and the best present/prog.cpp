#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int power(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b%2==1)
        {
            ans=ans*a;
        }
        b=b>>1;
        a=a*a;
    }
    return ans;
}
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
void solve()
{
    // vector<int>arr;
    // for(int i=1;i<=20;i++)
    // {
    //     arr.push_back(i*power(-1,i));
    // }
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // int sum=0;
    // for(int i=0;i<arr.size()-1;i++)
    // {
    //     sum+=arr[i];
    //     cout<<arr[i]<<" "<<sum<<endl;
    // }
    // cout<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        int sum1=0,sum2=0;
        if(l%2==0)
        {
            sum1=l/2;
        }
        else
        {
            sum1=-ceil(l/2.0);
        }
        if(r%2==0)
        {
            sum2=r/2;
        }
        else
        {
            sum2=-ceil(r/2.0);
        }
        cout<<sum2-sum1<<endl;
        // cout<<sum1<<" "<<sum2<<endl;
        // cout<<sum2<<endl;
    }
}