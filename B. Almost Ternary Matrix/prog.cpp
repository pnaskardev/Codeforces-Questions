#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
vector<string>arr(55,"");
vector<vector<int>>a(52);
vector<int>s3(52),s4(52);
int32_t main(void)
{

    int counter=0;
    string s1="1001";
    string s2="0110";
    for(int i=0;i<=50;i++)
    {
        
        for(int j=0;j<12;j++)
        {
            arr[i]+=s1;
        }
        arr[i]+="01";

        i++;
        for(int j=0;j<12;j++)
        {
            arr[i]+=s2;
        }
        arr[i]+="01";
        i++;

        for(int j=0;j<12;j++)
        {
            arr[i]+=s2;
        }
        arr[i]+="01";

        i++;
         for(int j=0;j<12;j++)
        {
            arr[i]+=s1;
        }
        arr[i]+="01";


    }
    for(int i=0;i<51;i+=2)
    {
        if(i%4==0)
        {
            s3[i]=1;
            s3[i+1]=0;
        }
        else
        {
            s3[i]=0;
            s3[i+1]=1;
        }
    }
    
    for(int i=0;i<51;i+=2)
    {
        if(i%4==0)
        {
            s4[i]=0;
            s4[i+1]=1;
        }
        else
        {
            s4[i]=1;
            s4[i+1]=0;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i+=2)
    {
        if(i%4==0)
        {
            for(int j=0;j<m;j++)
            {
                cout<<s3[j]<<" ";
            }
            cout<<endl;
            for(int j=0;j<m;j++)
            {
                cout<<s4[j]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=0;j<m;j++)
            {
                cout<<s4[j]<<" ";
            }
            cout<<endl;
            for(int j=0;j<m;j++)
            {
                cout<<s3[j]<<" ";
            }
            cout<<endl;
        }
    }
    // cout<<endl;
}