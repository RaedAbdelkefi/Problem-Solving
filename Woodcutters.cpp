#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> x;
vector <ll> h;
vector <ll> v;
ll f(int i,ll j)
{
    if(i+1 >=x.size())
        return j;
    if(x[i]+h[i]<x[i+1] && x[i]-h[i]>x[i-1])
    {

        ll y=x[i];


        j++;

        int s=i+1;
        int u=i;




        f(s,j);


    }
    else if(x[i]+h[i]<x[i+1] || x[i]-h[i]>x[i-1])
    {

        if (x[i]+h[i]<x[i+1])
        {
            x[i]+=h[i];
            j++;
            i++;
            f(i,j);
        }
        else if(x[i]-h[i]>x[i-1])
        {

            j++;
            i++;
            f(i,j);
        }
    }
    else{
    i++;
    f(i,j);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        x.push_back(a);
        h.push_back(b);
    }
    if(x.size()==1)
    {
        cout<<1<<endl;
        return 0;
    }
    ll j=f(1,1);




    cout<<j+1<<endl;


    return 0;
}
