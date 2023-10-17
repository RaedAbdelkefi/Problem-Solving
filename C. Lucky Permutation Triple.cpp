#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    for(int i=1;i<=n;i++)
        b[i-1]=i;
    b[n-1]=0;
    for(int i=0;i<n;i++)
        c[i]=(a[i]+b[i])%n;
    set <int> s(c,c+n);
    if (s.size()==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";

        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";

        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<c[i]<<" ";

        }
        cout<<endl;
    }
    else
        cout<<-1<<endl;


    return 0;
}
