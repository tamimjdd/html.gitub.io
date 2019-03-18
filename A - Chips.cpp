#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int a[n];
        a[0]=0;

        for(int i=1;i<=n;i++)
        {
            a[i]=a[i-1]+i;
            //cout<<a[i]<<endl;
        }
        //cout<<m<<' '<<a[n]<<endl;
        if(m>a[n])
            m=m%a[n];
        //cout<<m<<endl;

        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(m==i)
            {
                flag=1;
                break;
            }
            else if(m<i)
            {
                flag=2;
                break;
            }
            else
                m=m-i;
        }
        if(flag==1)
            cout<<0<<endl;
        else if(flag==2)
            cout<<m<<endl;
    }

    return 0;
}
