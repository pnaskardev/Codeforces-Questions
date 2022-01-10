#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool amul( int a, int b,int c);
bool bmul(int a, int b,int c);
bool cmul(int a, int b,int c);
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
    int a,b,c;
    cin>>a>>b>>c;
    // // if a is mulitplied by m   
    // if(((2*b-c)%a)==0)
    // {
    //     // cout<<"YES"<<endl;
    //     // cout<<amul(a,b,c)<<" "<<bmul(a,b,c)<<" "<<cmul(a,b,c)<<endl;
    //     // return;
    // }
    // //if b is multipled by b
    // if((a%2==0 && c%2==0) || (a%2!=0 && c%2!=0))
    // {
    //     int t=(a+c)/2;
    //     if((t%b)==0)
    //     {
    //         // cout<<"YES"<<endl;
    //         // cout<<amul(a,b,c)<<" "<<bmul(a,b,c)<<" "<<cmul(a,b,c)<<endl;
    //         // return;
    //     }
    // }
    // if(((2*b-a)%c)==0)
    // {
    //     // cout<<"YES"<<endl;
    //     // cout<<amul(a,b,c)<<" "<<bmul(a,b,c)<<" "<<cmul(a,b,c)<<endl;
    //     // return;
    // }
    // // cout<<"NO"<<endl;
    // // cout<<amul(a,b,c)<<" "<<bmul(a,b,c)<<" "<<cmul(a,b,c)<<endl;
    int p=amul(a,b,c);
    int q=bmul(a,b,c);
    int r=cmul(a,b,c);
    if(p==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(q==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(r==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

bool amul(int a, int b,int c)
{
    if(((2*b-c)%a)==0 && ((2*b-c)/a)>0)
    {
        return true;
    }
    return false;
}

bool bmul(int a, int b,int c)
{
    if((a%2==0 && c%2==0) || (a%2!=0 && c%2!=0))
    {
        int t=(a+c)/2;
        if((t%b)==0 && (t/b)>0)
        {
            return true;
        }
    }
    return false;
}

bool cmul(int a, int b,int c)
{
     if(((2*b-a)%c)==0 && ((2*b-a)/c)>0)
    {
        return true;
    }
    return false;
}