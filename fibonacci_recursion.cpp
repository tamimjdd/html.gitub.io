#include<bits/stdc++.h>
using namespace std;

unsigned long long lookup[10000000];

unsigned long long fibo(unsigned long long z)
{
    if(lookup[z]==-1)
    {
        if(z<=1)
            lookup[z]=z;
        else
            lookup[z]=fibo(z-1)+fibo(z-2);
    }
    return lookup[z];
//    int res=0;
//
//    if(z==0)
//        return 0;
//    if(z==1)
//        return 1;
//    else
//        res=fibo(z-1)+fibo(z-2);
//
//    return res;
}

int main()
{
    unsigned long long n;
    memset(lookup,-1,sizeof(lookup));

    while(cin>>n)
    {
        clock_t begin,end;

        begin=clock();
        unsigned long long sum=fibo(n);
        end=clock();

        cout<<sum<<' '<<end-begin<<endl;
    }


    return 0;
}
