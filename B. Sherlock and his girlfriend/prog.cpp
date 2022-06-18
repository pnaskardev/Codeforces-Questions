#include<iostream>
#include<bits/stdc++.h>
using namespace std;


const int N=1000000;
vector<bool> sieve(N+1, true);
// Sieve of erastothenes
void create_sieve()
{
    int n=N;
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (sieve[i]==true) 
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false;
            }
        }
    }   
}


int main(void)
{
    create_sieve();
    int n;
    cin>>n;
    if(n>2)
    {
        cout<<2<<endl;

    }
    else
    {
        cout<<1<<endl;
    }
    for(int i=2;i<=n+1;i++)
    {
        if(sieve[i]==true)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<2<<" ";
        }
    }
    cout<<endl;
}