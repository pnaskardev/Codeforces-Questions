#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
// vector<int>obs(1000000+1,0);
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
    // fill(obs.begin(),obs.end(),0);
    int n,u,v;
    cin>>n>>u>>v;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        // int t;
        // cin>>t;
        // obs[t]++;
        cin>>arr[i];
    }

    int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])>1)
        {
            ans=0;
        }
        if(arr[i]==arr[i-1])
        {
            ans=min(ans,min(u,v)+v);
        }
        if(abs(arr[i]-arr[i-1])==1)
        {
            ans=min(ans,min(u,v));
        }
    }
    cout<<ans<<endl;
    // else
    // {
        
    //     else
    //     {
    //         if((arr[0]<arr[1] || arr[0]>arr[1] ) && abs(arr[0]-arr[1])>1)
    //         {
                
    //             cout<<0<<endl;
    //         }
    //         else
    //         {
    //             cout<<min(u,v)<<endl;
    //         }




    //         // else
    //         // {
    //         //     if(arr[0]>arr[1] && abs(arr[0]-arr[1])>1)
    //         //     {
    //         //         cout<<0<<endl;
    //         //     }
    //         //     else
    //         //     {
    //         //         cout<<min(u,v)<<endl;
    //         //     }
    //         // }
    //     }
    // }


   
}