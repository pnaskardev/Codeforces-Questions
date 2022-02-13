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
    vector<int>arr;
    for(int i=0;i<4;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    int a=max(arr[0],arr[1]);
    int b=max(arr[2],arr[3]);
    sort(arr.begin(),arr.end());
    if((a==arr[2]||a==arr[3])&&(b==arr[2]||b==arr[3]))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}