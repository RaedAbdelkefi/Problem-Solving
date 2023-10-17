#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(pair<ll,ll> p1,pair<ll,ll>p2)
{
    return p1.second < p2.second;
}
ll fact(ll n)
{
    if (n==0) return 1;
    return n*fact(n-1);
}
ll combunational(ll n)
    {

        return n*(n-1)/2 ;
    }
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    vector <pair<ll,ll> > points;
    vector <ll> xs;
    vector <ll> ys;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        points.push_back({x,y});
        xs.push_back(x);
        ys.push_back(y);
    }
    int i=0;
    sort(points.begin(),points.end());
    sort(xs.begin(),xs.end());
    vector <vector <pair<ll,ll> > > A;
    ll cnt=0;

    while (i<n)
    {
        vector <pair<ll,ll> > Ax;
       vector <ll> ::iterator it=upper_bound(xs.begin()+i,xs.end(),xs[i]);

       for(int j=i; j<(it-xs.begin()) ;j++)
            Ax.push_back(points[j]);
        if (Ax.size()==1)
        {
            i=it-xs.begin();
            continue;
        }
        A.push_back(Ax);
        cnt+=combunational(Ax.size());
        i= it-xs.begin();

    }

    sort(points.begin(),points.end(),compare);
    sort(ys.begin(),ys.end());
    vector <vector <pair<ll,ll> > > B;
    i=0;
    while (i<n)
    {
        vector <pair<ll,ll> > Ax;
       vector <ll> ::iterator it=upper_bound(ys.begin()+i,ys.end(),ys[i]);

       for(int j=i; j<(it-ys.begin()) ;j++)
            Ax.push_back(points[j]);
        if (Ax.size()==1) {
            i=it-ys.begin();
            continue;
        }
        sort(Ax.begin(),Ax.end());

        int k=0;
        while(k<Ax.size())
        {
            vector <pair<ll,ll>> ::iterator it1=upper_bound(Ax.begin()+k,Ax.end(),Ax[k]);

            if (it1-Ax.begin() > 1)
                cnt-=combunational(it1-Ax.begin()-k);
            k=it1-Ax.begin();
        }
        B.push_back(Ax);
        cnt+=combunational(Ax.size());
        i= it-ys.begin();

    }






    cout<<cnt<<endl;




    return 0;
}
