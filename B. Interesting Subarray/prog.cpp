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
    // solve();
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n),temp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans=false;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])>=2)
        {
            ans=true;
            temp.push_back(i-1+1);
            temp.push_back(i+1);
            break;
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
        cout<<temp[0]<<" "<<temp[1]<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}