#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        string ch;
        if (v[0]==v[1] && v[0]==v[2])
            ch="YES";
       else if (v[0]==v[1])
       {
           if (v[2]!=2*v[0] && v[2]!=3*v[0] && v[2]!=4*v[0])
            ch="NO";
           else
            ch="YES";
       }
       else
       {
           if (v[1]!=2*v[0] && v[2]!=2*v[0])
            ch="NO";
            else if (v[1]==2*v[0] && v[2]==2*v[0])
                ch="YES";
           else if (v[1]==2*v[0])
           {
               if (v[2]!=3*v[0])
                ch="NO";
               else ch="YES";
           }
           else if (v[2]==2*v[0])
           {
               if (v[1]!=3*v[0])
                ch="NO";
               else
                ch="YES";
           }

       }
        cout<<ch<<endl;

    }


    return 0;
}
