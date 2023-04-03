#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y,n,k=0,i,tmp=0,m;
    while(t--)
    {
        cin>>x>>y>>n;
        m=n;

        /// ekhane mone rakhte hobe, jor kore, mod y banacchi

        tmp= n%x;
        if(tmp==y){cout<<n<<"\n";}
        else {
        n=n-tmp;
        while(1)
        {
            if(n+y>m){n=n-x;}
            else {cout<<n+y<<"\n"; break;}
        }



        }



    }


    return 0;
}
