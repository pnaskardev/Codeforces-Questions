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
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>arr(n);
    arr[0]=a;
    int j=n;
    for(int i=1;i<=(n/2);i++)
    {
        if(j!=b &&j!=a && arr[i-1]!=j)
        {
            arr[i]=j;
            j--;
        }
        else
        {
            j--;
            arr[i]=j;
        }
    }
    j=1;
    for(int i=(n/2);i<=n-1;i++)
    {
        if(j!=a &&j!=b )
        {
            j++;
            arr[i]=j;
            // j++;
        }
        else
        {
            j++;
            arr[i]=j;
        }
    }
    arr[n-1]=b;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}