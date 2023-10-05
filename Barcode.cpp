#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector <int> t;
vector<int> v;
int x,y,m,n;
int dp[1000+9][1000+9][2];
int f(int i,int width,int last)
{

    if(i==m)
        {
            if (width <x || width >y)
                return 100000000;
            return 0;
        }
    if (dp[i][width][last]!=-1)
        return dp[i][width][last];
    if(width>=x && width<y && x!=y)
    {
        int a=f( (i+1), (width+1) ,last )+t[i]*last+(1-last)*(n-t[i]);

        int b=f( (i+1), 1, (1-last) )+t[i]*(1-last)+(last)*(n-t[i]);

        dp[i][width][last]=min(a,b);
        return dp[i][width][last];

    }
    if(width<x )
    {

        return f((i+1),(width+1),last)+t[i]*last+(1-last)*(n-t[i]);
    }
    if(width>=y )
    {
       return f((i+1),1,(1-last))+t[i]*(1-last)+(last)*(n-t[i]);
    }

    if(width ==x && x==y)
    {


        return f((i+1),1,(1-last)) + t[i]*(1-last)+(last)*(n-t[i]);
    }

}
int main()
{
   cin>>n>>m>>x>>y;
   int d[n][m];
   for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
   {
       char c;
       cin>>c;
       if(c=='.')
        d[i][j]=0;
       else
        d[i][j]=1;


   }

   t.resize(m,0);


   for (int j=0;j<m;j++ )
    for (int i=0;i<n;i++)
   {
       if (d[i][j]==1)
        t[j]++;
   }

   v.push_back(t[0]);
   memset(dp, -1, sizeof(dp));
   int a1=t[0]+f(1,1,1);

   v.clear();
   v.push_back(n-t[0]);
   int a2=n-t[0]+f(1,1,0);

   cout<<min(a1,a2)<<endl;

    return 0;
}
