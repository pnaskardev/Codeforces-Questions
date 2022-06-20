#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n),odd,even;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }

    sort(odd.rbegin(),odd.rend());
    sort(even.rbegin(),even.rend());
    int sum=0;
    // auto last1=unique(odd.begin(),odd.end());
    // odd.erase(last1,odd.end());

    // auto last2=unique(even.begin(),even.end());
    // even.erase(last2,even.end());



    // for(auto i:odd)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto i:even)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    if(odd.size()%2!=0)
    {   
        for(int i=0;i<odd.size()-1;i++)
        {
            sum+=odd[i];
        }
        for(auto i:even)
        {   
            sum+=i;
        }
    }
    else
    {
        for(auto i:odd)
        {
            sum+=i;
        }
        for(auto i:even)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;

}