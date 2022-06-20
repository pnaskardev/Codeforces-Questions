#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
{
    // srand(time(0));
    // fstream myIN;
    // myIN.open("in_0.in",ios::out);//write
    // fstream myOUT;
    // myOUT.open("out_0.out",ios::out);
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
    if(is_sorted(s.begin(),s.end()))
    {
        cout<<0<<endl;
    }
    else
    {
        vector<int>ans;
        string t=s;
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++)
        {
            if(t[i]!=s[i])
            {
                ans.push_back(i+1);
            }
        }
        cout<<1<<endl;
        cout<<ans.size()<<" ";
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}