#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;

    while(cin>>n)
    {
        int a[n],b[n],c[n],sum=0;
        memset(b,0,0);
        memset(c,0,0);

        for(int i=1;i<=n;i++)
            cin>>a[i];

        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;

        if(r1<r2)
        {
            for(int k=0,j=r1;k<=(r2-r1);k++,j++)
            {
                b[k]=a[j];
            }
            sort(b,b+(r2-r1+1));
        }
        else if(r1>r2)
        {
            for(int k=0,j=r2;k<=(r1-r2);k++,j++)
            {
                b[k]=a[j];
            }
            sort(b,b+(r1-r2+1));
        }
        c1=min((b[0]+1),c1);

        sum=sum+(r2-r1);
        sum=sum+(abs(c1-c2));

        int x=0;
        c[x]=sum;

        int counter=0;

        for(int i=r1;i>=1;i--)
        {
            if(a[r1-1]<(c1-1))
            {
                counter=counter+2;
                c1=a[r1-1]+1;

                counter=counter+abs(c1-c2);

                if(r2>r1)
                {
                    counter=counter+(r2-r1);
                }
                c[++x]=counter;
            }
        }
        for(int i=r1;i<=n;i++)
        {
            if(a[r1+1]<(c1-1))
            {
                counter=counter+2;
                c1=a[r1+1]+1;

                counter=counter+abs(c1-c2);

                if(r1>r2)
                {
                    counter=counter+(r1-r2);
                }
                c[++x]=counter;
            }
        }
        sort(c,c+(x+1));
        cout<<c[0]<<endl;
    }

    return 0;
}

