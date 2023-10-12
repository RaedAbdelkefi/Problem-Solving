#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    ios::sync_with_stdio(0);
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int som=1;
        bool b=true;
        int i=0;
        bool cnt=false;
        bool a=true;

        for(int i=0;i<n;i++)
        {


            if (x[i]==s[0])
            {

                int l=i;
                som=1;
                for(int j=1;j<m;j++)
            {

                l++;

                if (l==n) {
                    l=0;
                    som++;

                }

                if (x[l]!=s[j]) {

                    cnt=true;
                    som=1;
                    break;
                }
                cnt=false;

            }
            }
            if (x[i]==s[0] && cnt==false)
            {
                a=false;
                break;
            }





    }
    if (a==false)
    {

        double p=log(som)/log(2);
        cout<<ceil(p)<<endl;
    }

    if (a==true)
        cout<<-1<<endl;



    }


    return 0;
}
