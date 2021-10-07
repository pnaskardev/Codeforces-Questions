#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    int c1=0,c2=0,c3=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            c1++;
        }
        else if(s[i]=='2')
        {
            c2++;
        }
        else if(s[i]=='3')
        {
            c3++;
        }
    }
    for(int i=0;i<c1;i++)
    {
        cout<<'1';
        if(i==c1-1 && c2==0 &&c3==0)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    for(int i=0;i<c2;i++)
    {
        cout<<'2';
        if(i==c2-1 && c3==0)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    for(int i=0;i<c3;i++)
    {
        cout<<'3';
        if(i==c3-1)
        {
            cout<<endl;
        }
        else
        {
            cout<<'+';
        }
    }
    
}