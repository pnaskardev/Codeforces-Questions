#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<double>maxpoint={500.0,1000.0,1500.0,2000.0,2500.0},time(5),wa(5);
    for(int i=0;i<5;i++)
    {
        cin>>time[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>wa[i];
    }
    double hs,hu;
    cin>>hs>>hu;
    double sum=0;
    for(int i=0;i<5;i++)
    {
        // sum+=max(value1(maxpoint[i]),value2(maxpoint[i],wa[i],time[i]));
        sum+=max(maxpoint[i]-maxpoint[i]*time[i]/250-50*wa[i], maxpoint[i]/10*3);
    }
    sum+=hs*100;
    sum-=hu*50;
    cout<<sum<<endl;
}