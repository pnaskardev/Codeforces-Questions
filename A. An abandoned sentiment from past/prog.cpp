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
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=-1;
    for(i;i<n-1;i++)
    {
        if(a[i+1]==0)
        {
            break;
        }
    }
    i++;
    // cout<<i<<endl;
    sort(b.rbegin(),b.rend());
    for(int j=0;j<m;j++)
    {
        a[i]=b[j];
        i++;
    }

    // for(auto i:a)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    if(is_sorted(a.begin(),a.end())==true)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }

}