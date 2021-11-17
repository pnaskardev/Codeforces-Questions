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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int p1=s.find_first_of('*');
    int p2=s.find_last_of('*');
    s[p1]='x';
    // cout<<s<<endl;
    int c=1;
    while(true)
    {
        int j=min(p1+k,n-1);
        while(p1<j && s[j]=='.')
        {
            j--;
        }
        if(p1==j)
        {
            break;
        }
        c++;
        p1=j;
    }
    // cout<<s<<endl;
    cout<<c<<endl;
}