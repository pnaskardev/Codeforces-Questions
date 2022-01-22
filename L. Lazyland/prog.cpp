#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
const long long N=1e5+5;
int32_t main(void)
{
    int n,k,counter;
    cin>>n>>k;
    counter=k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int>ans;
    int work[N];
    for(int i=0;i<n;i++)
    {
        if(!work[a[i]])
        {
            work[a[i]]=b[i];
            counter--;
        }
        else if(b[i]>work[a[i]])
        {
            ans.push_back(work[a[i]]);
            work[a[i]]=b[i];
        }
        else
        {
            ans.push_back(b[i]);
        }
    }
    sort(ans.begin(),ans.end());
    int sum=0;
   for(int i=0;i<counter;i++)
   {
       sum+=ans[i];
   }
    cout<<sum<<endl;
}