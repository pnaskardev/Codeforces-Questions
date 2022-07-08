#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
const int N=1000000+1,d=2;
vector<bool> sieve(N+1, true);
vector<int>ans;
// Sieve of erastothenes
void create_sieve(int n)
{
    // int n=N;
    sieve[0]= false;
    for(int i=1;i<=(n);i++)
    {
        if(sieve[i]==true)
        {
            ans.push_back(i);
            // sieve[i]=false;
            for(int j=i;(d*j)<=n;j=(j*d))
            {
                sieve[i]=false;
                ans.push_back(d*j);
                sieve[d*j]=false;
            }
        }
        else
        {
            continue;
        }
    }
}
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
        arr[i]=i+1;
    }
    create_sieve(n);
    cout<<d<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    ans.clear();
    sieve.assign(N+1,true);
}