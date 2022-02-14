
//Not accepted 




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
    int minim=*min_element(arr.begin(),arr.end());
    int maxim=*max_element(arr.begin(),arr.end());
    int x=1,y=n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==minim)
        {
            a=i;
        }
        if(arr[i]==maxim)
        {
            b=i;
        }
    }
    int ans=0;
    // max(min((a+1),(n-a)),min((b+1),(n-b)));
    // ans+=min((a+1),(n-a));
    // ans+=min((b+1),(n-b));
    ans=max(min((a+1),(n-a)),min((b+1),(n-b)));
    cout<<ans<<endl;


}