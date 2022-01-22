#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool palindrome(string s);
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
    unordered_map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    if(mp.size()==1)
    {
        cout<<-1<<endl;
        return;
    }
    string temp=s;
    char b=s[s.size()-1];
    for(int i=0;i<s.size()-1;i++)
    {
        if(b!=s[i])
        {
            swap(s[i],s[s.size()-1]);
        }
    }
    cout<<s<<endl;
}
bool palindrome(string s)
{
     // Stores the reverse of the
    // string S
    string P = s;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (s == P) 
    {
        // Return "Yes"
        return true;
    }
    // Otherwise
    return false;
}