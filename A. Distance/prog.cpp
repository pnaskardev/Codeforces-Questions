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
    int x1=0,y1=0,x2,y2;
    cin>>x2>>y2;
    int ans1=-1,ans2=-1;
    int i=0;
    int d=abs(0-x2)+abs(0-y2);
    // cout<<d<<endl;
    while(i<=50)
    {
        int j=0;
        while(j<=50)
        {
            if((abs(0-i)+abs(0-j))==(abs(x2-i)+abs(y2-j)))
            {
                ans1=i;
                ans2=j;
                break;
            }
            j++;
        }
        if((abs(0-i)+abs(0-j))==(abs(x2-i)+abs(y2-j)))
        {
            ans1=i;
            ans2=j;
            break;
        }
        i++;
    }
    cout<<ans1<<" "<<ans2<<endl;
}