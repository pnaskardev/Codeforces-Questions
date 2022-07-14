#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
void Rotate_ClockWise(vector<string>&a)
{
    int N=a.size();
    for (int i = 0; i < N / 2; i++) 
    {
        for (int j = i; j < N - i - 1; j++) 
        {
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
}
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
    vector<string>arr(n),temp(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    temp=arr;
    Rotate_ClockWise(temp);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}