#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);

    vector <pair <string ,int> > v;
    map <string,int> m;
    set <string > s;
    bool b=false;
    string ch;
    while (true)
    {
        string ch;
        cin>>ch;
        if (ch=="()")
            break;
        int x;
        string ch1="";
        string chx="";
        bool b=false;
        int n=ch.size();
        for(int i=1;i<n-1;i++)
        {
            if(ch[i]==',')
                {
                    b=true;
                    continue;
                }
            if (!b)
                chx+=ch[i];
            else
                ch1+=ch[i];
        }
        if (chx.size()==0)
            b=true;
        x=stoi(chx);
        x--;
        if (m.find(ch1)==m.end())
            m.insert({ch1,x});
        else b=true;




    }
    if (m.find("")==m.end() || b)
        cout <<"not complete"<<endl;
    else
    {
        map<string,int> ma=m;
        queue <string> q;
        q.push("");

        while(!q.empty())
        {

            string chc=q.front();

            q.pop();
            if (m.find(chc)==m.end())
                continue;
            int x=m[chc];
            ma[chc]=-1;
            q.push({chc+'L'});
            q.push({chc+'R'});
        }
        b=false;
        for(auto it:ma)
        {
            if (it.second!=-1)
            {
                b=true;
                break;
            }
        }
        if (b)  cout <<"not complete"<<endl;
        else
        {
            queue <string> qu;
        qu.push("");

        while(!qu.empty())
        {

            string chc=qu.front();

            qu.pop();
            if (m.find(chc)==m.end())
                continue;
            cout<<m[chc]+1<<" ";

            qu.push({chc+'L'});
            qu.push({chc+'R'});
        }
        cout<<endl;
        }
    }








    return 0;
}
