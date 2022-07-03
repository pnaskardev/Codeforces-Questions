#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve(vector<vector<int>>&arr,int n);
int32_t main(void)
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<vector<int>>arr(n+1,vector<int>(n+1));
        for(int i=1;i<=n;i++)
        {
            cin>>a[i-1];
            arr[0][i]=a[i-1];
        }
        unordered_map<int,int>mp;
        unordered_map<int,int>::iterator it;
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[0][i]<<" ";
        // }
        // cout<<endl;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<=n;j++)
            {
                mp[arr[i-1][j]]++;
            }
            for(int j=1;j<=n;j++)
            {
                arr[i][j]=arr[i-1][j];
            }
            // for(auto i:mp)
            // {
            //     cout<<i.first<<"->"<<i.second<<endl;
            // }
            for(int j=1;j<=n;j++)
            {
                it=mp.find(arr[i][j]);
                arr[i][j]=it->second;
                // cout<<arr[i][j]<<" ";
            }
            mp.clear();
            // cout<<endl;
        }

        // for(int i=0;i<n+1;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        solve(arr,n);
    }

}
void solve(vector<vector<int>>&arr,int n)
{
    int q;
    cin>>q;
    while(q--)
    {
        int k,x;
        cin>>x>>k;
        // cout<<x<<" "<<k<<endl;
        if(k>=n+1)
        {
            if(x<1)
            {
                cout<<arr[n][x]<<endl;
            }
            else
            {
                cout<<arr[n][x]<<endl;
            }
            
        }
        else
        {
            if(x<1)
            {
                cout<<arr[k][x]<<endl;
            }
            else
            {
                cout<<arr[k][x]<<endl;
            }
        }
    }
}