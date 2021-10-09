#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   } 
   int max_val=INT_MIN,max_i,min_val=INT_MAX,min_i;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>max_val)
       {
           max_val=arr[i];
           max_i=i;
       }
       if(arr[i]<=min_val)
       {
           min_val=arr[i];
           min_i=i;
       }
   }
   if(min_i>max_i)
   {
       cout<<n-min_i+max_i-1;
   }
   else
   {
       cout<<n-min_i-1+max_i-1<<endl;
   }
}