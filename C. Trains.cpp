#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


void f(ll a,ll b,ll period)
{
        ll left=(period/a) -1;
        ll right= period/b;
        if (left > right )
            cout<<"Dasha"<<endl;
        else if (left < right)
            cout<<"Masha"<<endl;
        else
            cout<<"Equal"<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    ll a,b;
    cin>>a>>b;
    ll period=a*b/__gcd(a,b);

    if (a<b)
    {
        f(a,b,period);
    }
    else
    {
       int left=(period/b) -1;
        int right= period/a;
        if (left < right )
            cout<<"Dasha"<<endl;
        else if (left > right)
            cout<<"Masha"<<endl;
        else
            cout<<"Equal"<<endl;
    }

    return 0;
}
