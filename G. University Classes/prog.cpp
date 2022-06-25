#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<7;i++)
    {
        int counter=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]=='1')
            {
                counter++;
            }
            maxi=max(counter,maxi);
        }
    }
    cout<<maxi<<endl;
}