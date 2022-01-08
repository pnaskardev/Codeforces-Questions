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
    int upper=floor((n+1)/2.0);
    int counter=0;
    if(k<=upper)
    {
        int x=1,y=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==x && j==y && k--)
                {
                    cout<<"R";
                    x+=2;
                    y+=2;
                }
                else
                {
                    cout<<".";
                }
            }
            cout<<endl;
        }
        return;
    }
    cout<<"-1"<<endl;
}