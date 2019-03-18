#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b%a==0)
        return a;
    else
        gcd(b%a,a);
}

int main()
{
    int p,q;

    while(cin>>p>>q)
    {
        cout<<gcd(p,q)<<endl;
    }

    return 0;
}
