#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;

    while(cin>>n>>m)
    {
        long long a[m],b[m],x=-1,y=-1;

        for(int i=1;i<=m;i++)
        {
            long long temp,temp2;
            cin>>temp>>temp2;

            if(temp!=temp2)
            {
                if(temp%2==0)
                    a[++x]=temp-1;
                else
                    a[++x]=temp;

                if((temp2-1)%2==0)
                    b[++y]=temp2-1;
                else
                    b[++y]=temp2;
            }
        }
        if(x==-1)
            cout<<1<<' '<<n+1<<endl;
        else
        {
            sort(a,a+(x+1));
            sort(b,b+(y+1));

            long long count=0;

            if(a[0]!=1)
            {
                cout<<1<<' '<<a[0]<<endl;
                count++;
            }
            for(int k=0;k<x;k++)
            {
                if(b[k]<a[k+1])
                {
                    long long left=b[k]+1;
                    long long right=a[k+1];

                    if(left!=right)
                    {
                        cout<<left<<' '<<right<<endl;
                        count++;
                    }
                }
            }
            if(b[y]<n)
            {
                long long left=b[y]+1;
                long long right=n+1;

                if(left!=right)
                {
                    cout<<left<<' '<<right<<endl;
                    count++;
                }
            }
            if(count==0)
                cout<<"Sheldon ate it all !!!"<<endl;
        }
    }

    return 0;
}
