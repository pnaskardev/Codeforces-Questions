#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int power(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b%2==1)
        {
            ans=(ans*a)%100000007;
        }
        b=b>>1;
        a=(a*a)%100000007;
    }
    return ans;
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
    int x1,x2; 
    int p1,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    int num1;
    int num2;
    num1=x1*power(10,p1);
    num2=x2*power(10,p2);
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
    return;
}