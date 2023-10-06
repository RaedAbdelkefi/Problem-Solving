#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    ll n,a,b;
    cin>>n>>a>>b;
    ll t[n];
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;

        t[i]= (x*a %b)/a;

    }
    for(int i=0;i<n;i++)
        cout<<t[i]<<" ";

    cout<<endl;
}
