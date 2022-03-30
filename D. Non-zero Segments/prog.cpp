#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0,count=0;
    set<int>s;
    s.insert(0);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(s.find(sum)!=s.end())
        {
            count++;
            s.clear();
            s.insert(0);
            sum=arr[i];
        }   
        s.insert(sum);
    }
    cout<<count<<endl;
}