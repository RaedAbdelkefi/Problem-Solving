#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare (pair <pair<int,int> ,int> p1,pair <pair<int,int> ,int> p2)
{
    return p1.first.second > p2.first.second;
}
bool compare_tables(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    vector < pair < pair<int,int> , int> > request;
    for(int i=1;i<=n;i++)
    {
        pair < pair<int,int> ,int > p;
        int x,y;
        cin>>x>>y;
        p={{x,y},i};
        request.push_back(p);
    }
    sort(request.begin(),request.end(),compare);
    int k;
    cin>>k;
    vector < pair<int,int> > tables;
    vector <int > places;
    for(int i=1;i<=k;i++)
    {
        int x;
        cin>>x;
        pair <int,int> p;
        p={x,i};
        tables.push_back(p);
        places.push_back(x);
    }
    sort(tables.begin(),tables.end(),compare_tables);
    sort(places.begin(),places.end());
 
    int cout_globale=0;
    vector <int> accepted_request;
    vector<int> accepted_table;
    for(auto i:request)
    {
        int nbre_places=i.first.first;
        vector<int> ::iterator upper=upper_bound(places.begin(),places.end(),nbre_places);
        int index=upper - places.begin();

        if (nbre_places==places [index-1])
                index--;
        if (index == places.size()) continue;
        cout_globale+=i.first.second;
        accepted_request.push_back(i.second);
        accepted_table.push_back(tables[index].second);

        places.erase(places.begin()+index);
        tables.erase(tables.begin()+index);

    }
    cout <<accepted_request.size()<<" "<<cout_globale<<endl;
    for(int i=0;i<accepted_request.size();i++)
        cout<<accepted_request[i]<<" "<<accepted_table[i]<<endl;






    return 0;
}
