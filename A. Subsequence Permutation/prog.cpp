#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    string s;
    cin>>s;
    string temp=s;
    sort(temp.begin(),temp.end());
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=temp[i])
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}