#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
void cal();
int sum=0;
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
    int n,x;
    cin>>n>>x;
    // cout<<n<<x<<endl;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    bool flag=false;
   
    vector<int>res;
    for(int i=0;i<arr.size();i++)
    {
        int t;
        sum+=arr[i];
        if(arr[i]%x==0 && flag==false)
        {
            t=arr[i]/x;
            int temp=x;
            while(temp--)
            {
                
            }
        }
        else
        {
            flag=true;
        }
    }
    cout<<sum<<endl;
}

void cal()
{

}