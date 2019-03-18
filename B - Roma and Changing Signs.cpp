#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    while(cin>>n>>k)
    {
        int a[n],b[n],c[n],count=0,x=-1,y=-1,nsum=0,psum=0,esum=0;
        int index=0,flag=0,zf=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]<0)
            {
                if(k>count)
                {
                    b[++x]=abs(a[i]);
                    count++;
                    nsum=nsum+b[x];
                    c[++y]=b[x];
                }
                else
                {
                    esum=esum+a[i];
                }
            }
            if(a[i]>=0)
            {
                if(flag==0)
                {
                    index=i;
                    flag=1;
                }
                psum=psum+a[i];
            }
        }
        //cout<<nsum<<' '<<esum<<' '<<psum<<' '<<a[index]<<endl;

        if(k>count)
        {
            if(((k-count)%2)!=0)
            {
                cout<<nsum+esum+psum-min(a[index],a[index-1])<<endl;
            }
        }
        else
            cout<<nsum+esum+psum<<endl;
    }

    return 0;
}
/*6 3
-5 -5 -4 -3 2 5
6 4
-5 -5 2 3 4 5
6 4
-5 -4 3 2 0 5
6 5
-5 -5 2 3 4 5
6 5
-5 -4 -3 -2 0 5*/
