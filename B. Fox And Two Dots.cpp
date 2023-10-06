#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool valid(int x,int n)
{
    return x>=0 && x<n;
}


int main()
{
    ios::sync_with_stdio(0);
    cout << fixed << setprecision(16);
    int n,m;
    cin>>n>>m;
    string graph[n];
    for(int i=0;i<n;i++)

            cin>>graph[i];


    queue< pair< pair<int,int> , pair<int,int> > > q;

    bool b=false;
    int t1[]={-1,0,0,1};
    int t2[]={0,1,-1,0};
    bool v[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            v[i][j]=false;

    for(int i=0;i<n;i++)

         for(int j=0;j<m;j++)
    {
        if (!v[i][j]){
         q.push({{i,j},{-1,-1}});
         v[i][j]=true;
         while(!q.empty())
    {
        pair <int,int> fils=q.front().first;
        pair<int,int> parent=q.front().second;
        int x1=fils.first;
        int y1=fils.second;
        q.pop();

        for(int k=0;k<4;k++)
        {
            int x=x1+t1[k];
            int y=y1+t2[k];
            if (valid(x,n) && valid(y,m) && !v[x][y] && (graph[x][y]==graph[x1][y1]) )
                {
                    q.push({{x,y},{x1,y1}});
                    v[x][y]=true;
                }
            else if (valid(x,n) && valid(y,m) && (v[x][y]==true) && (make_pair(x,y)!=parent) && (parent.first!=-1) && (parent.second!=-1 )&& (graph[x][y]==graph[x1][y1]))
                {
                    cout<<"Yes"<<endl;
                    return 0;


                }
        }



    }
    }
    }



         cout<<"No"<<endl;

    return 0;
}
