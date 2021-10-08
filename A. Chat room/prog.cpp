//something wrong with the website 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h' && mp.find('h')==mp.end())
        {
            mp['h']=i;
        }
        else if(s[i]=='e' && mp.find('e')==mp.end())
        {
            mp['e']=i;
        }
        else if(s[i]=='l' && mp.find('l')==mp.end())
        {
            mp['l']=i;
        }
        else if(s[i]=='l' && mp.find('l')!=mp.end())
        {
            mp['!']=i;
        }
        else if(s[i]=='o' && mp.find('o')==mp.end())
        {
            mp['o']=i;
        }
    }
    string arr;
    for(auto i:mp)
    {
        if(i.first=='!')
        {
            arr.push_back('l');
        }
        else
        {
            arr.push_back(i.first);
        }
    }
    reverse(arr.begin(),arr.end());
    if(arr=="hello")
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}