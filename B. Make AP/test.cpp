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

    cout<<amul(a,b,c)<<" "<<bmul(a,b,c)<<" "<<cmul(a,b,c)<<endl;
}


bool amul(int a, int b,int c)
{
    if(((2*b-c)%a)==0)
    {
        int m=(2*b-c)/a;
        if(m<=0)
        {
            return false;
        }
        return true;
    }
    return false;
}

bool bmul(int a, int b,int c)
{
    if((a%2==0 && c%2==0) || (a%2!=0 && c%2!=0))
    {
         if(((2*b-c)%a)==0)
        {
            int m=(2*b-c)/a;
            if(m<=0)
            {
                return false;
            }
            return true;
        }
    }
    return false;
}

bool cmul(int a, int b,int c)
{
    if(((2*b-a)%c)==0)
    {
        int m=(2*b-a)/c;
        if(m<=0)
        {
            return false;
        }
        return true;
    }
    return false;
}