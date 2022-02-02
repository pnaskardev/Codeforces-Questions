#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool check(int a,int b);
int binary(vector<int>arr, int target);
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
    int n;
    cin>>n;
    string s;
    vector<int>arr;
    for(int i=10;i<=1000;i++)
    {
        if(i%7==0)
        {
            arr.push_back(i);
        }
    }
    int a=n/10;
    int b=n%10;
    if(check(a,b)==true)
    {
        cout<<n<<endl;
        return;
    }
    int ans1=binary(arr,n);
    int ans2=binary(arr,n+9); 
    if(b==0)
    {
        
        cout<<max(ans1,ans2)<<endl;
        return;
    }
    cout<<min(ans1,ans2)<<endl;
}
bool check(int a,int b)
{
    int t=(a-(b*2));
    if(t%7==0)
    {
        return true;
    }
    return false;
}
int binary(vector<int>arr, int target)
{
    int start=0;
    int end=arr.size()-1;
    int ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]>target)
        {
            end=mid-1;
        }
        if(arr[mid]<=target)
        {
            ans=arr[mid];
            start=mid+1;
        }
    }
    return ans;
}