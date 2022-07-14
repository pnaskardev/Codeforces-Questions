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
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        for(int j=0;j<k;j++)
        {
            // cout<<arr[i]<<endl;
            if(s[j]=='D')
            {
                arr[i]+=1;
                if(arr[i]>9)
                {
                    arr[i]=arr[i]%10;
                }
            }
            else if(s[j]=='U')
            {
                arr[i]-=1;
                if(arr[i]<0)
                {
                    arr[i]=(arr[i]%10)+10;
                }
            }
        }
        // cout<<endl;
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}