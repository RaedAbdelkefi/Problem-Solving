#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int depart[n+1];
    int arrive[n+1];
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        depart[i]=x;
    }
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;

        arrive [x]=i;
    }
    int c[n+1];
    for(int i=1;i<=n;i++)
        c[i]=arrive[depart[i]];
    int m=0;
    int cnt=0;
   for(int i=2;i<=n;i++)
   {
       m=max(m,c[i-1]);
       if (c[i] <m   ) cnt++;
   }
   cout<<cnt<<endl;

    return 0;
}
