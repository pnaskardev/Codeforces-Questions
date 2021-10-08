#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int arr[5][5];
    int d_x,d_y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                d_x=i;
                d_y=j;
            }

        }
    }
    int ans=abs(d_x-2)+abs(d_y-2);
    cout<<ans<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         cout<<arr[i][j];
            
    //     }
    //     cout<<endl;
    // }
}