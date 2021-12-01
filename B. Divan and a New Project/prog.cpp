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
    if(n==1)
    {
        cout<<0<<" "<<1<<endl;
        return;
    }
    vector<pair<int,int>>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i].first;
        vec[i].second=i+1;
    }
    sort(vec.rbegin(),vec.rend());
    // for(auto i:vec)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    queue<pair<int,int>>st;
    for(auto i:vec)
    {
        st.push(make_pair(i.first,i.second));
    }
    vector<int>ans(n+1);
    int j=0;
    while(st.size()>0 && j<1)
    {
        pair<int,int>p=st.front();
        ans[p.second]=j;
        j++;
        st.pop();
        
    }
    // cout<<"j->"<<j<<endl;
    ans[j]=1;
    j++;
    // cout<<"j->"<<j<<endl;
    while(st.size()>0 && j<n+1)
    {
        pair<int,int>p=st.front();
        ans[p.second]=j;
        j++;
        st.pop();
    }
    int sum=0;
    ans[0]=1;
    for(int i=1;i<n+1;i++)
    {
        sum+=2*(abs(ans[0]-ans[i]));
    }
    cout<<sum<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}