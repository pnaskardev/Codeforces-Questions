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
void next(char &x) {
    if (x <= 'b') x++;
    else x = 'a';
}
 
void solve() {
    int n, k;
    cin >> n >> k;
    char cur = 'a';
    for (int i = 0; i < n; ++i) {
        cout << cur;
        next(cur);
    } 
    cout << endl;
}