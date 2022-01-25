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
    int x1,x2; 
    int p1,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    int num1=0,num2=0;
    num1=log10(x1)+1+p1;
    num2=log10(x2)+1+p2;
    if(num1>num2)
    {
        cout<<">"<<endl;
    }
    else if(num1<num2)
    {
        cout<<"<"<<endl;
    }
    else
    {
        int minim=min(p1,p2);
        p1=p1-minim;
        p2=p2-minim;
        while(p1--)
        {
            x1=x1*10;
        }
        while(p2--)
        {
            x2=x2*10;
        }
        if(x1==x2)
        {
            cout<<"="<<endl;
        }
        else if(x1>x2)
        {
            cout<<">"<<endl;
        }
        else 
        {
            cout<<"<"<<endl;
        }
    } 
}