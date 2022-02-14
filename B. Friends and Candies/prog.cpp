#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(auto i:arr)
    {
        sum+=i;
    }
    if(sum%n==0)
    {
        int c=0;
        int t=sum/n;
        for(auto i:arr)
        {
            if(i>t)
            {
                c++;
            }
        }
        cout<<c<<endl;
        return;
    }
    cout<<-1<<endl;
}