#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    solve();
}
void solve()
{
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].second;
    }
    if(arr[0].first==0)
    {
        cout<<"NO"<<endl;
        return;
    }

    else if(arr[0].first==1)
    {
         if(arr[d-1].first==1)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(arr[d-1].first==0 && arr[d-1].second==1)
        {
            int flag=0;
            for(int i=d-1;i<n;i++)
            {
                if(arr[i].first==1 && arr[i].second==1)
                {
                    flag=1;
                }
                else
                {
                    continue;
                }
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
                return;
            }
            cout<<"NO"<<endl;
            return;
        }


        if(arr[d-1].first==0 && arr[d-1].second==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
   
    
   

}