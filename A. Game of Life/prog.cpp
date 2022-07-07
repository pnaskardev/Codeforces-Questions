#include<iostream>
#include<bits/stdc++.h>
#define int long long int
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
    int n,m;
    string s;
    cin>>n>>m>>s;
    string temp=s;
    vector<string>arr;
    for(int i=0;i<min(n,m);i++)
    {
        vector<int>idx;
        for(int j=0;j<n;j++)
        {
            if(j==0 && temp[j]=='0' && temp[j+1]=='1')
            {
                // temp[j]='1';
                idx.push_back(j);
            }
            else if(j==n-1 && temp[j]=='0' && temp[j-1]=='1')
            {
                // temp[j]='1';
                idx.push_back(j);
            }
            else if(temp[j-1]=='1' && temp[j]=='0' && temp[j+1]=='0')
            {
                // temp[j]='1';
                idx.push_back(j);
            }
            else if( j>0 && j<n-1 && temp[j-1]=='0' && temp[j]=='0' && temp[j+1]=='1')
            {
                // temp[j]='1';
                idx.push_back(j);
            }
            
        }
        // cout<<idx.size()<<endl;
        for(int k=0;k<idx.size();k++)
        {
            temp[idx[k]]='1';
        }
        idx.clear();
        // for(auto )
        arr.push_back(temp);
    }
    int i=min(m,n)-1;
    // if(m>arr.size())
    // {
    //     i=arr.size()-1;
    // }
    for(int j=0;j<n;j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;

}