#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
        // arr[i]=rand()%100;
        cin>>arr[i];
    }
    pair<int,int>idx;
    int minim=INT_MAX;
    for(auto i:arr)
    {
        minim=min(minim,i);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==minim)
        {
            idx.first=minim;
            idx.second=i+1;
            break;
        }
    }
    if(n%2!=0)
    {
        cout<<"Mike"<<endl;
    }
    else
    {
        if(idx.second%2==0)
        {
            cout<<"Mike"<<endl;
        }
        else
        {
            cout<<"Joe"<<endl;
        }
    }
}