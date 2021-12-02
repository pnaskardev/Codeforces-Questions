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
    string x1,x2; 
    int p1,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    while(p1--)
    {
        x1+='0';
    }
    while(p2--)
    {
        x2+='0';
    }
    int num1=0;
    int num2=0;
    for(int i=0;i<x1.length();i++)
    {
        num1=num1*10+(x1[i]-'0');
    }
    for(int i=0;i<x2.length();i++)
    {
        num2=num2*10+(x2[i]-'0');
    }
    // cout<<num1<<" "<<num2<<endl;
    if(num1<num2)
    {
        cout<<"<"<<endl;
        return;
    }
    if(num1>num2)
    {
        cout<<">"<<endl;
        return;
    }
    cout<<"="<<endl;
    
}