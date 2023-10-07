#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
// a b
// c d
// a*c b*c c*a d*a
// a*d b*d c*b d*b
// b*c >= d*a : quotient( 1 - d*a / b*c)
 
// a*d >=c*b : quotient(1 -   c*b >= a*d )
 
 
void quotion(int x,int y)
{
    int i=__gcd(x,(y-x));
 
    cout<<(y-x)/i<<'/'<<y/i;
}
 
int main()
{
    ios::sync_with_stdio(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b*c >=d*a)
        quotion(d*a,b*c);
    else
        quotion(c*b,a*d);
 
    return 0;
}
