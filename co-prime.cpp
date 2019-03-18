#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
    int q=min(x,y);
    int flag=1;

    while(q>=1)
    {
        if(x%q==0 && y%q==0)
            return q;
        else
        {
            if(flag==1)
                q=q/2;
            else
                q--;
        }
        flag++;
    }
}

int main()
{
    int n;

    while(cin>>n)
    {
        int count=0,a[n],p=-1;

        for(int i=1;i<n;i++)
        {
            int g=gcd(i,n);

            if(g==1)
            {
                a[++p]=i;
                count++;
            }
        }
        cout<<"Total="<<count<<endl;
        for(int i=0;i<=p;i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }

    return 0;
}
