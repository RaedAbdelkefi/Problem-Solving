#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll nCr(ll n, ll r)
{
    ll sum=1;
    for(ll i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
    return sum;
}


int main()
{
    ios::sync_with_stdio(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll cnt=0;
    ll x=4;
    ll cnt1=0;
    ll cnt2=0;

    for (ll l=max(x,k-m );l<= min(n,k-1) ;l++)
    {


        cnt2+=(nCr(n,l)*nCr(m,k-l));
    }



    cout<<cnt2<<endl;
    return 0;
}
