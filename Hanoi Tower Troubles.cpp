#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int n)
{
    if (n==1)
        return 1;
    if (n%2==0)
        return n+ f(n-1);
    else
        return n+1 +f(n-1);
}
int main()
{
    ios::sync_with_stdio(0);
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }


    return 0;
}
