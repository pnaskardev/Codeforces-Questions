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
    if(n%2==0)
    {
        cout<<0<<endl;
        return;
    }
    int count=0;
    int temp1=n;
    while(temp1>0)
    {
        temp1=temp1/10;
        count++;
    }
    if(count==1 && n%2!=0)
    {
        cout<<-1<<endl;
        return;
    }
    int rev_num=0;
    int temp=n;
    int count_e=0;
    while(temp>0)
    {
        int t=temp%10;
        if(t%2==0)
        {
            count_e++;
        }
        rev_num=rev_num*10+temp%10;
        temp=temp/10;
    }
    // cout<<rev_num<<endl;
    int last=rev_num%10;
    if(count_e==0)
    {
        cout<<-1<<endl;
        return;
    }
    if(last%2==0)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        cout<<2<<endl;
        return;
    }
}