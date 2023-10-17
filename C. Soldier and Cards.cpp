#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int n;
    int n1,n2;
    cin>>n;
    cin>>n1;
    deque <int> p1;
    deque <int> p2;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        p1.push_front(x);
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        p2.push_front(x);
    }
    vector <pair<deque<int> ,deque<int> > > play;
    play.push_back(make_pair(p1,p2));
    bool exist=true;
    int cnt=0;

    while(p1.empty()==0 && p2.empty()==0)
    {
        int a=p1.back();
        int b=p2.back();
        cnt++;
        p1.pop_back();
        p2.pop_back();

        if (a < b)
        {
            p2.push_front(a);
            p2.push_front(b);
        }
        else
        {
            p1.push_front(b);
            p1.push_front(a);
        }

        if (find(play.begin(),play.end(),make_pair(p1,p2))==play.end())
            play.push_back(make_pair(p1,p2));
        else
        {
            exist=false;
          
            break;
        }
    }
    if (exist)
    {
        if (p1.empty())
            cout<<cnt<<" "<<2<<endl;
        else
            cout<<cnt<<" "<<1<<endl;
    }
    else
        cout<<-1<<endl;

    return 0;
}
