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
    int a,b,p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    int n=s.size();
    char c='!';
    int sum=0,ans=1;
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]!=c)
        {
            c=s[i];
            if(s[i]=='A' && p>=a)
            {
                sum+=a;
                p=p-a;
            }
            else if(s[i]=='B' && p>=b)
            {
                sum+=b;
                p=p-b;
            }
            else //if(s[i] is something and I dont have the money to buy the ticket)
            {
                // 1 is added because I have to travel till
                // the station where the current pointer is 
                // +1 is added because the string is 1 based and not 0 based 
                ans=i+1+1;
                break;
            }
        }
    }
    // cout<<sum<<endl;
    // +1 is added because the string is 1 based and not 0 based 
    cout<<ans<<endl;
    // cout<<endl;
}