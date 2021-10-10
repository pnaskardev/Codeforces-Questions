#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    getline(cin,s);
    // cout<<s<<endl;
    int count=0;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            if(mp.find(s[i])==mp.end())
            {
                count++;
                mp[s[i]]++;
            }
            else
            {
                continue;
            }
        }
        else if(s[i]==' '||s[i]==','||s[i]=='{'||s[i]=='}')
        {
            continue;
        }
    } 
    cout<<count<<endl;
}