#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int32_t main(void)
{
    int n,finalsum=0,sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sumx=sumx+x;
        sumy=sumy+y;
        sumz=sumz+z;
    }
    if(sumx==0&&sumy==0&&sumz==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}


