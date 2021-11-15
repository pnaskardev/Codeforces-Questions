#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int cal(string s,string t)
{
    int counter=0;
    int i=s.length()-1;
    while(i>=0 && s[i]!=t[t.length()-1])
    {
        i--;
        counter++;
    }
    i--;
    if(i<0)
    {
        return counter;
    }
    while(i>=0 && s[i]!=t[t.length()-2])
    {
        i--;
        counter++;
    }
    return counter;

}
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
    string s=to_string(n);
    vector<string>arr={"00","25","50","75"};
    int ans=INT_MAX;
    for(auto i:arr)
    {
        ans=min(ans,cal(s,i));
    }
    cout<<ans<<endl;
}