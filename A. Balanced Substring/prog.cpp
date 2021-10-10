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
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=-1,b=-1;
    bool t=false;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]=='a'&& arr[i+1]=='b')
        {
            a=i;
            b=i+1;
            t=true;
            break;
        }
        else if(arr[i]=='b' &&arr[i+1]=='a')
        {
            a=i;
            b=i+1;
            t=true;
            break;
        }
    }
    if(t==true)
    {
        cout<<a+1<<" "<<b+1<<endl;
    }
    else
    {
        cout<<-1<<" "<<-1<<endl;
    }
    
}