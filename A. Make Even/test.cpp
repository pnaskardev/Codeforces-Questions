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
    int last=n%10;
    if(last%2==0)
    {
        cout<<0<<endl;
        return;
    }
    int count=0;
    int temp=n;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    if(count==1 && n%2!=0)
    {
        cout<<-1<<endl;
        return;
    }
    if(count==1 && n%2==0)
    {
        cout<<0<<endl;
        return;
    }
    int ops=0;
    int rev_temp=0;
    while(n>0)
    {
        rev_temp=rev_temp*10+n%10;
        n=n/10;
    }
    int index=0;
    pair<int,int>p;
    while(rev_temp>0)
    {
        int rem=rev_temp%10;
        if(rem%2==0)
        {
            p.first=rem;
            p.second=index;
            break;
        }
        else 
        {
            index++;
            rev_temp=rev_temp/10;
        }
    }
    ops+=floor((index+1)/2.0);
    if(count>2)
    {
        ops++;
    }
    // cout<<p.first<<" "<<p.second<<endl;
    cout<<ops<<endl;
}