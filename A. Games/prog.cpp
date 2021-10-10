#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        arr.push_back(make_pair(p,q));
    }   
    int c=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i].first==arr[j].second)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}