#include<bits/stdc++.h>
using namespace std;

int a[1000];

int sqr(int n)
{
    a[0]=0,a[1]=1,a[2]=2,a[3]=3;

    int i;

    for(i=4;i<=n;i++)
    {
        a[i]=i;

        for(int x=1;x<=n;x++)
        {
            int temp=x*x;

            if(temp>n)
                break;
            else
            {
                cout<<a[i]<<' '<<a[i-temp]<<endl;
                a[i]=min(a[i],1+a[i-temp]);
            }
        }
    }

    return a[n];
}

int main()
{
    int num;

    while(cin>>num)
    {
        cout<<sqr(num)<<"\n"<<endl;
    }

    return 0;
}
