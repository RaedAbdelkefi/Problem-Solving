#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    string a;
    cin>>a;
    vector <int> v;
    int diviseur=2;
    for(int i=0;i<n;i++)
    {
        int k=a[i]-'0';
        if (k%2!=0 && k!=1 && k!=9)
            v.push_back(k);
        else if (k==1 || k==0) continue;
        else if (k==2) v.push_back(k);
        else if (k==9)
        {
            v.push_back(3);
            v.push_back(3);
            v.push_back(2);
            v.push_back(7);
        }
        else
        {
            v.push_back(k-1);
            if (k==4)
            {
                v.push_back(2);
                v.push_back(2);
            }
            else if (k==6)
            {

                v.push_back(3);
            }
            if (k==8)
                for(int i=0;i<3;i++)
                    v.push_back(2);

        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++)
        cout<<v[i];


    return 0;
}
