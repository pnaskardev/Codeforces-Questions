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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[n-2]>arr[n-1])
    {
        cout<<-1<<endl;
    }
    else
    {
        if(arr[n-1]<0)
        {
            if(is_sorted(arr.begin(),arr.end())==true)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<n-2<<endl;
            for(int i=1;i<=n-2;i++)
            {
                // arr[i-1]=arr[n-2]-arr[n-1];
                cout<<i<<" "<<n-1<<" "<<n<<endl;
            }

            // for(auto i:arr)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<endl;


        }
    }
}