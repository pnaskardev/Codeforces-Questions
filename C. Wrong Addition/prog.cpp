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
    vector<int>ans;
    int a,s;
    cin>>a>>s;
    while(s>0)
    {
        int x=a%10;
        int y=s%10;
        if(x<=y)
        {
            ans.push_back(y-x);
        }
        else
        {
            s=s/10;
            y+=(s%10)*10;
            if(x<y && y>=10 && y<=18)
            {
                ans.push_back(y-x);
            }
            else
            {
                cout<<-1<<endl;
                return;
            }
        }
        s/=10;
        a/=10;
    }   
    if(a>0)
    {
        cout<<-1<<endl;
    }
    else
    {
        while(ans.back()==0)
        {
            ans.pop_back();
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
   
}