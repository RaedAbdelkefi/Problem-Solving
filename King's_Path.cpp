#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int n,m;
double x;
 
 
 
 
int main()
{
    set <pair<long long,long long>> s;
    int n,x1,y1,xf,yf;
    cin>>x1>>y1>>xf>>yf;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,a,b;
        cin>>x>>a>>b;
        for(int j=a;j<b+1;j++)
            s.insert({x,j});
    }
    queue<pair<long long,long long>> q;
    map < pair<long long ,long long> , long long> m;
    int dist=1;
    m[{x1,y1}]=0;
    q.push({x1,y1});
    int dx[8]={0,0,1,1,1,-1,-1,-1};
    int dy[8]={1,-1,1,-1,0,1,-1,0};
    while(!q.empty())
    {
        pair <long long ,long long> f= q.front();
        q.pop();
 
 
        for(int i=0;i<8;i++)
        {
            int nx=f.first+dx[i];
            int ny=f.second+dy[i];
            pair< long long, long long > p={nx,ny};
            if (s.count(p)==0 || m.count(p)!=0)
                continue;
 
 
            q.push(p);
            m[p]=m[f]+1;
            if(p.first==xf && p.second ==yf)
            {
                cout<<m[{xf,yf}]<<endl;
 
                return 0;
            }
 
 
        }
 
    }
 
 
 
 
 
 
 
 
    cout<<-1<<endl;
 
 
    return 0;
}
