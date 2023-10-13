#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    string ch;
    cin>>ch;
    map <char,int> m;
    for(int i=0;i<ch.size();i++)
    {
        if (m.find(ch[i])!=m.end())
            m[ch[i]]++;
        else
            m[ch[i]]=1;
    }

    if (ch.size()%2==0)
    {
        bool b=true;
        int s=0;

        for(auto i :m)
        {

           if (i.second%2!=0&& b==true)
                {
                    b=false;
                    continue;
                }
           s+=(i.second%2);

        }
        if (s%2==0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    else
    {
        bool b=false;
        int s=0;
        for (auto i:m)
        {
            if (i.second%2!=0 && b==false)
            {
                b=true;
                continue;
            }
            s+=(i.second%2);



        }

        if (s%2==0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

    return 0;
}
