#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// PRIME FACTORISATION WITH QUERIES
bool factorise(int n)
{
    int primes=0;
    set<int>arr;
    int N=n;
    // does the work in O(log(log n))
    // making the smallest prime sieve
    // this sieve stores the smallest prime factor a number can have
    vector<int>spf(N+1);
    for(int i=1;i<=N;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i*i<=N;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }


    // printing prime factors
    // does the work in O(n)
    while(n!=1)
    {
        // cout<<spf[n]<<" ";
        arr.insert(spf[n]);
        primes++;
        n=n/spf[n];
    }
    // cout<<endl;
    if(arr.size()==2)
    {
        // for(auto i:arr)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        return true;
    }
    else
    {
        return false;
    }
}


int main(void)
{
    int n,counter=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(factorise(i)==true)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}