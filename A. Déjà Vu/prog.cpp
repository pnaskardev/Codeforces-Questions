#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool palindrome(string s) 
{
    int n = s.length();
    for(int i = 0; i < n; i++) 
    {
        if(s[i] != s[n - i - 1])
        {
            return false;
        } 
    }
    return true;
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
    string s;
    cin>>s;
        if(palindrome(s+'a')==false)
        {
            s=s+'a';
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return;
        }
        else if(palindrome('a'+s)==false)
        {
            s='a'+s;
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
}