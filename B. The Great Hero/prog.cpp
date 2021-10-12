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
    int a,b,n;
    cin>>a>>b>>n;
    vector<pair<int,int>>vect;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        vect.push_back(make_pair(arr[i],arr1[i]));
    }
    sort(vect.begin(),vect.end());
    for(int i=0;i<vect.size();i++)
    {
        if(b<=0)
        {

            cout<<"NO"<<endl;
            return;
        }
        int h_m,m_m;
        h_m=b/vect[i].first;
        m_m=vect[i].second/a;
        int c1,c2;
        c1=b%vect[i].first;
        c2=vect[i].second%a;
        if(c1)
        {
            h_m++;
        }
        if(c2)
        {
            m_m++;
        }
        int t_matches=min(h_m,m_m);
        b-=t_matches*vect[i].first;
        vect[i].second-=t_matches*a;
    }
    if(vect[n-1].second>0 )
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
    }
}