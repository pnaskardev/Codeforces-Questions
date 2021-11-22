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
       char arr[n][n];
       vector<pair<int,int>>vect;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               cin>>arr[i][j];
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(arr[i][j]=='*')
               {
                   vect.push_back(make_pair(i,j));
               }
           }
       }
       vect.push_back(vect[0]);
       vect.push_back(vect[1]);
       int a=vect[0].first,b=vect[0].second,p=vect[1].first,q=vect[1].second;
       if(a==p)
       {
           vect[2].first=(vect[2].first+1)%n;
           vect[3].first=(vect[3].first+1)%n;
       }
       else if(b==q)
       {
           vect[2].second=(vect[2].second+1)%n;
           vect[3].second=(vect[3].second+1)%n;
       }
       else
       {
           arr[a][q]='*';
           arr[p][b]='*';
       }
       arr[vect[2].first][vect[2].second]='*';
       arr[vect[3].first][vect[3].second]='*';
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               cout<<arr[i][j];
           }
           cout<<endl;
       }
}