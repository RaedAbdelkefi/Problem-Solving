#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> t;
vector <int> v;
void f(int i,int j)
{



    if (i>=t.size())
        return;
    if(t[i]==1)
    {
        if (t[i-1]==1)
        {
            v[j]++;
            t[i]=0;


        }
        i++;
        f(i,j);
    }
    else if(t[i]==2)
    {
        if(t[i-1]==2)
        {
            v[j]++;
            t[i]=0;
        }
        i++;
        f(i,j);

    }
   else  if(t[i]==0)
    {
        v[j]++;
        i++;
        f(i,j);
    }
   else  if(t[i]==3)
    {
        if(t[i-1]==1)
        {
            t[i]=2;
            i++;
            f(i,j);
        }
       else if(t[i-1]==2)
        {
            t[i]=1;
            i++;
            f(i,j);
        }
        else if (t[i-1]==0 && t[i+1]==0 && i!=t.size()-1)
        {
            i++;
            f(i,j);
        }
        else if(t[i-1]==0)
        {
            vector <int> r=t;
            t[i]=2;
            int s=i+1;
            v.push_back(v[j]);
            int k=v.size()-1;
            f(s,j);
            t=r;
            t[i]=1;


            f(s,k);
        }
        
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        t.push_back(a);
    }
    int x;
    if(t[0]==0)
     {
         v.push_back(1);
         f(1,0);
         x=*min_element(v.begin(),v.end());
     }
    else if(t[0]==2 || t[0]==1)
        {
            v.push_back(0);
            f(1,0);
         x=*min_element(v.begin(),v.end());

        }
    else
    {
        vector <int> r=t;
        v.push_back(0);
        t[0]=2;
        f(1,0);
        int z=*min_element(v.begin(),v.end());

        v.clear();
        v.push_back(0);
        t=r;
        t[0]=1;
        f(1,0);
        int y=*min_element(v.begin(),v.end());

        x=min(y,z);

    }



    cout<<x<<endl;




    return 0;
}
