//something wrong with the website 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s,ans,comp="hello";
    cin>>s;
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==comp[j])
        {
            ans+=s[i];
            j++;
        }
    }
    if(ans=="hello")
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}