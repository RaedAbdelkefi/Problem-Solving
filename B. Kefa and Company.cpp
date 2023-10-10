#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int distance(int i,int j , vector <pair<ll,ll>> v)
{
    return v[j].first-i;
}



int main()
{
    ios::sync_with_stdio(0);
    int n,d;
    cin>>n>>d;
    int money[n];
    int factor[n];
    vector <pair<ll,ll> > v;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});

    }
    sort(v.begin(),v.end());
    ll s=0;
    ll prefix_sum[n]={0};
    prefix_sum[0]=v  [0].second;
    for (int i=1;i<n;i++)
        prefix_sum[i]=v[i].second+prefix_sum[i-1];



   for(int i=0;i<n;i++)
    {
        ll x=v[i].first;
        int debut=i;
        int fin=n-1;
        int y,ans=i;
        while(debut <= fin)
        {
            y=(fin + debut)/2;

            if ( (v[y].first-x) < d) {

                    debut=y+1;
                    ans=y;
            }
            else
            {
                fin=y-1;

            }




        }


        if (i>=1)
            s=max(s, (prefix_sum[ans] - prefix_sum[i-1] ) );
        else s=max(s,prefix_sum[ans]);

    }
    cout<<s<<endl;



    return 0;
}
