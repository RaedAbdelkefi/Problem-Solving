#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(pair<ll,ll> p1,pair<ll,ll> p2)
{
    return p1.second < p2.second;
}

int main()
{
    ios::sync_with_stdio(0);
    ll n,r,avg;
    cin>>n>>r>>avg;
    vector < pair<ll,ll> > grades;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        cnt+=(avg-x);
        grades.push_back(make_pair(x,y));


    }
    if (cnt<=0)
    {
        cout<<0<<endl;

    }
    else
    {
        sort(grades.begin(),grades.end(),compare);
        ll s=0;
        for(auto i: grades)
        {
            if (cnt==0) break;
            ll grade=i.first;
            ll b=i.second;

            s+=(min(r-grade, cnt)*b);

            cnt-=min(r-grade, cnt);

        }
        cout << s<<endl;

    }


    return 0;
}
