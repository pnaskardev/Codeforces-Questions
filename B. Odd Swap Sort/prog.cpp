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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    if(is_sorted(arr.begin(),arr.end())==true)
    {
        cout<<"Yes"<<endl;
        return;
    }
    bool ans=true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]%2!=0)
            {
                int j=i+1;
                while(j<n )
                {
                    if(arr[i]>arr[j])
                    {
                        if(arr[j]%2!=0)
                        {
                            ans=false;
                            break;
                        }
                        else
                        {
                            j++;
                        }
                    }
                    else 
                    {
                        break;
                    }
                    
                }
            }
            if(arr[i]%2==0)
            {
                int j=i+1;
                while(j<n)
                {
                    if(arr[i]>arr[j])
                    {
                         if(arr[j]%2==0)
                        {
                            ans=false;
                            break;
                        }
                        else
                        {
                             j++;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    if(ans==true)
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}