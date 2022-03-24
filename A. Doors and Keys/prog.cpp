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
    string s;
    cin>>s;
    if(isupper(s[0]==true))
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<pair<char,int>>arr;
    arr.push_back(make_pair('R',0));
    arr.push_back(make_pair('G',0));
    arr.push_back(make_pair('B',0));
    bool ans=true;
    for(int i=0;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            char a=s[i];
            for(int j=0;j<arr.size();j++)
            {
                char b=a-32;
                if(arr[j].first==b)
                {
                    arr[j].second=1;
                }
            }
        }
        else
        {
            char a=s[i];
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j].first==a)
                {
                    if(arr[j].second==0)
                    {
                        ans=false;
                    }

                }
            }
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;

}