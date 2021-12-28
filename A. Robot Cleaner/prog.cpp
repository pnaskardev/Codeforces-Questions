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
    int n,m,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    int dr=1,dc=1,counter=0;
    // if(rd>=rb && cd>=cb)
    // {
    //     int x=rd-rb;
    //     int y=cd-cb;
    //     cout<<min(x,y)<<endl;
    //     return;
    // }
    // if(rd<=rb && cd<=cb)
    // {
    //     int x=2*(n-rb)+abs(rd-rb);
    //     int y=2*(m-cb)+abs(cd-cb);
    //     cout<<min(x,y)<<endl;
    //     // cout<<x<<" "<<y<<endl;
    // }
    // if(rb<=rd && cb>=cd)
    // {
    //     int x=rd-rb;
    //     // int y=2*(m-cb)+abs(cd-cb);
    //     // cout<<min(x,y)<<endl;
    //     cout<<x<<endl;
    // }
    // if(rb>=rd && cb<=cd)
    // {
    // //    int x=2*(n-rb)+abs(rd-rb);
    //     int y=cd-cb;
    //     // cout<<min(x,y)<<endl;
    //     cout<<y<<endl;
    // }
    while(1)
    {
        if(rb==rd || cb==cd)
        {
            break;
        }
        if(rb+dr>n || rb+dr<1)
        {
            dr=dr*-1;
        }
        if(cb+dc>m || cb+dc<1)
        {
            dc=dc*-1;
        } 
        rb+=dr;
        cb+=dc;
        counter++;
    }
    cout<<counter<<endl;
}