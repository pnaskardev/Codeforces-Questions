#include<iostream>
#include<bits/stdc++.h>
// #define int long long int
using namespace std;
void solve();
int main(void)
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    cout<<arr[0]<<endl;
    // cout<<n<<endl;
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;

    set<int>s;
    for(auto i:arr)
    {
        s.insert(i);
    }
    // int total=0;
    // for(auto i:arr)
    // {
    //     total=total^i;
    //     // cout<<total<<endl;
    // }
    // // cout<<endl;
    // // cout<<"total->"<<total<<endl;
    // for(int i=0;i<n-1;i++)
    // {
    //     int t=total^arr[i];
    //     cout<<t<<endl;
    //     break;
    // }
    // // cout<<endl;
}