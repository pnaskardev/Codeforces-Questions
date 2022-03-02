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
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='1')
        {
            if(s1[i]=='1')
            {
                int p=i-1,q=i+1;
                if(p>=0 &&s1[p]!='2'&& s1[p]=='1')
                {
                    s1[p]='2';
                    s2[i]='0';
                    count++;
                }
                else if(q<n && s1[q]!='2' && s1[q]=='1')
                {
                    s1[q]='2';
                    s2[i]='0';
                    count++;
                }
            }
            else 
            {
                s1[i]='2';
                s1[i]='0';
                count++;
            }
        }
    }
    cout<<count<<endl;
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    // cout<<endl;
}