#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int>arr;
    int prefix[n];
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=arr.size()-1;i>=0;i--)
    {
        sum+=arr[i];
        prefix[i]=sum;
    }
    int c=1,i=n-1;
    while(prefix[i]<=(sum-prefix[i]))
    {
        i--;
        c++;
    }
    cout<<c<<endl;
}