#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
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
    vector<int>arr;
    for(int i=0;i<4;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int a=arr[0];
    int counter=0;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>a)
        {
            counter++;
        }
        
    }
    cout<<counter<<endl;
}