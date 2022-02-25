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
    int size=2*n;
    vector<int>arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int o=0,e=0;
    for(auto i:arr)
    {
        if(i%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e==o)
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}