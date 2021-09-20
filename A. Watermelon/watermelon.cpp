#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int w;
    cin>>w;
    int flag=0;
    if(w%2==0)
    {
        if(w==2)
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }
    else
    {
        flag=0;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}