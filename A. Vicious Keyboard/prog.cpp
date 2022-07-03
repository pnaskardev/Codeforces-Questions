#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
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
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<0<<endl;
    }
    else
    {
        int count=0,n=s.size();
        for(int i=1;i<n;i++)
        {
            if(s[i-1]=='V' && s[i]=='K')
            {
                count++;
            }
        }
        for(int i=1;i<n;i++)
        {
            if((s[i-1]=='V' && s[i]=='V' && s[i+1]!='K' && i<n)|| (i>=0 && s[i-2]!='V' && s[i-1]=='K' && s[i]=='K'))
            {
                count++;
                break;
            }
        }
        cout<<count<<endl;
    }
}