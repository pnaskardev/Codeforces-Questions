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
    int n;
    cin>>n;
    string red,blue;
    cin>>red;
    cin>>blue;
    int redc=0,bluec=0;
    for(int i=0;i<n;i++)
    {
        if(red[i]>blue[i])
        {
            redc++;
        }
        else if(blue[i]>red[i])
        {
            bluec++;
        }
    }
    if(redc>bluec)
    {
        cout<<"RED"<<endl;
        return;
    }
    if(bluec>redc)
    {
        cout<<"BLUE"<<endl;
        return;
    }
    if(redc==bluec)
    {
        cout<<"EQUAL"<<endl;
        return;
    }
}