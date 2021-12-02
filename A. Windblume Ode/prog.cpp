#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool isprime(int n);
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
    int sum=0;
    for(auto i:arr)
    {
        sum+=i;
    }
    if(isprime(sum)==1)
    {
        cout<<n-1<<endl;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                arr[i]=-1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<i<<" ";
        }
    }

}

bool isprime(int n)
{
    if(n==1)
    {
        return false;
    }
    int l=sqrt(n);
    for(int i=2;i<=l;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}