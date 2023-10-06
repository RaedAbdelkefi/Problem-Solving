#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

pair <bool, int> beautifull(string ch)
{
    int n=ch.size();
    if (ch[0]=='1')
    {
        int s=0;
        for(int i=1;i<n;i++)
        {
            if (ch[i]=='0')
                s++;
            else return {false,-1};
        }
        return {true ,s};

    }
    return {false,-1};
}

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;


    string y="";
    ll som=0;
    bool b=false;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        if (x[0]=='0')
        {
            b=true;
            break;
        }
        pair<bool,int> p=beautifull(x);
        if (p.first == false) y=x;
        else
            som+=p.second;

    }
    if (b) cout<<0<<endl;
    else{
    if (y=="") cout<<1;
    else cout<<y;
    for(int i=0;i<som;i++)
        cout<<0;
    cout<<endl;
    }

    return 0;
}
