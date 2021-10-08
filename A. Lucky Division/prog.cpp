#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool luck(int n)
{
    while(n>0)
    {
        int rem=n%10;
        if(rem!=4 && rem!=7 && rem!=0)
        {
            return false;
        }
        n=n/10;
    }
    return true;
}
int main(void)
{
    int n;
    vector<int>arr={47,744,4,5,17,467};
    for(int i=0;i<arr.size();i++)
    {
        cout<<"ans->"<<luck(arr[i])<<endl;
    }
    cout<<endl;
}