#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=INT_MIN;
    ans=max(ans,a+b+c);
    ans=max(ans,a+(b*c));
    ans=max(ans,a*b*c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
    cout<<ans<<endl;
}   