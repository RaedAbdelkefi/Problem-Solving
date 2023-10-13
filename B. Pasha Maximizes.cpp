#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void swapy(string &ch,int index ,int i)
{
    for(int j=index ;j>i;j--)
    {
        char a=ch[j];
        ch[j]=ch[j-1];
        ch[j-1]=a;
    }

}
pair <char,int > maxi(string ch,int i,int k)
{
    char m=ch[i];
    char a=ch[i];
    int index =i;
    int n=ch.size();
    for(int j=i;j<=min(i+k,n-1);j++)
        if ( (ch[j]-'0')>(m-'0'))
        {

            m=ch[j];
            index=j;
        }

    return make_pair(index,m);
}
int main()
{
    ios::sync_with_stdio(0);
    string ch;
    int k;
    cin>>ch;
    cin>>k;
    if (ch.size()==1)
        cout<<ch<<endl;
    else
    {
        char a=ch[0];
    int i=0;
    int n=ch.size();
    while(k>0 && i<n)
    {

        pair <int,int> p=maxi(ch,i,k);

        int index=p.first;
        char maximum=p.second;

        if (index==i)
        {

            i++;
            continue;
        }

        k-=(index-i);
        swapy(ch,index,i);
        i++;
    }
    cout<<ch<<endl;

    }


    return 0;
}
