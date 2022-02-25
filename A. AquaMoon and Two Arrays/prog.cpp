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
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<int,int>>p;
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            for(int j=0;j<n;j++)
            {
               if(i!=j && a[j]<b[j])
               {
                    while(a[i]!=b[i] && a[j]!=b[j])
                    {
                        a[i]--;
                        a[j]++;
                        // cout<<i+1<<" "<<j+1<<endl;
                        p.push_back(make_pair(i+1,j+1));
                    }
                    
               }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            ans=false;
        }
    }
    if(ans==true)
    {
        cout<<p.size()<<endl;
        for(auto i:p)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        return;
    }
    cout<<-1<<endl;
}