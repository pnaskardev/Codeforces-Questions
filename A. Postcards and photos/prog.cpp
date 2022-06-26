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
    int n=s.size(),ans=0;
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int j=i+1;
        while(j<n && s[i]==s[j])
        {
            j++;
        }
        j--;
        
        int num=j-i+1;
        if(num<=5)
        {
            ans++;
        }
        else
        {
            num=num%5;
            if(num==0)
            {
                ans+=(j-i+1)/5;
            }
            else
            {
                ans+=((j-i+1-num)/5)+1;
            }
        }
        // cout<<i<<" "<<j<<" "<<ans<<endl;
        i=j;
    }
    cout<<ans<<endl;
}