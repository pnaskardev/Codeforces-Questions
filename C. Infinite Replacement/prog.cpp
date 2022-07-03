#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
const int M=10000009;
long long pw(long long a, long long b) 
{
    if (b == 0)
    {
        return 1;
    }
    long long res = pw(a, b / 2);
    if (b % 2)
    {
        return res * res * a;
    } 
    else
    {
        return res * res;
    }
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
    string s,t;
    cin>>s>>t;
    set<char>st;
    for(int i=0;i<t.size();i++)
    {
        st.insert(t[i]);
    }
    if(t=="a")
    {
        cout<<1<<endl;
    }
    else if(st.count('a'))
    {
        cout<<-1<<endl;
    }
    else
    {
        int n=s.size();
        cout<<pw((long long)2,n)<<endl;
    }
}