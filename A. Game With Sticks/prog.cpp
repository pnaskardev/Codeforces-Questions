#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    int a=1,ma=0;
    while(n*m!=0)
    {
        n--;
        m--;
        if(a==1)
        {
            // cout<<"akshat->"<<n<<" "<<m<<endl;
            if(n*m!=0)
            {
                ma=1;
                a=0;
            }
            
        }
        else if(ma==1)
        {
            // cout<<"malvika->"<<n<<" "<<m<<endl;
            if(n*m!=0)
            {
                ma=0;
                a=1;
            }
        }
    }
    // cout<<"akshat->"<<a<<endl;
    // cout<<"malvika->"<<ma<<endl;
    if(a==1)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }
}