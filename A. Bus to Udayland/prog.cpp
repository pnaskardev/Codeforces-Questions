#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        // string temp=arr[i];
        // cout<<temp<<endl;
        if((arr[i][0]=='O' && arr[i][1]=='O')||(arr[i][3]=='O' && arr[i][4]=='O'))
        {
            cout<<"YES"<<endl;
            flag=true;
            if((arr[i][0]=='O' && arr[i][1]=='O'))
            {
                arr[i][0]='+';
                arr[i][1]='+';
            }
            else if((arr[i][3]=='O' && arr[i][4]=='O'))
            {
                arr[i][3]='+';
                arr[i][4]='+';
            }
            for(auto i:arr)
            {
                cout<<i<<endl;
            }
            break;
        }
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    
}