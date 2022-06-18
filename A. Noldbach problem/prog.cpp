#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
vector<bool> sieve(N+1, true);
vector<int>primes;
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

    for(int i=2;i<=n;i++)
    {
        if(sieve[i]==true)
        {
            primes.push_back(i);
        }
    }
}
int main(void)
{
    create_sieve();
    int n,c;
    cin>>n>>c;
    int counter=0;
    vector<int>ans;
    for(int i=0;i<=n;i++)
    {
        int j=i+1;
        int t=primes[i]+primes[j]+1;
        if(t>n)
        {
            break;
        }
        else
        {
            if(sieve[t]==true)
            {
                cout<<t<<" ";
                counter++;
            }
        }
    }
    // cout<<endl;
    if(counter==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}