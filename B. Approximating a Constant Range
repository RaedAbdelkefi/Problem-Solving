#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int t[n];
    bool a=true,b=true;
    for(int i=0;i<n;i++)
        cin>>t[i];
    int start=0,endi=0,s=1;
    int j,k;
    while (endi!=n-1)
    {



        if (t[endi+1]==t[start]+1 && a==true) {
                endi++;
                if (b) j=endi-start;

        b=false;

        s=max(s,endi-start+1);}
        else if (t[start] ==t[endi+1]+1  && b==true){
            endi++;
            if(a) k=endi-start;
            a=false;

            s=max(s,endi-start+1);
        }
        else if(t[start]==t[endi+1]){
            endi++;
            s=max(s,endi-start+1);}
        else {
                if (!b) {start+=j;
                endi=start;}
                else if (!a) {start+=k;
                endi=start;
                }
                else start=endi;
                b=true;
                a=true;}




    }
     s=max(s,endi-start+1);
    cout<<s<<endl;
    return 0;
}
