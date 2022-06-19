#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>odd,even;
    for(auto i:arr)
    {
        if(i%2==0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    int sum=0;
    for(auto i:arr)
    {
        sum+=i;
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    int k = min(odd.size(), even.size());
	int rem = sum;
    for(int i=0;i<k;i++)
    {
        rem-=even[i];
    }
    for(int i=0;i<k;i++)
    {
        rem-=odd[i];
    }
	if (odd.size()>k) 
    {
		rem -= odd[k];
	}
	else if (even.size()>k) 
    {
		rem -= even[k];
	}
	cout << rem << endl;
}