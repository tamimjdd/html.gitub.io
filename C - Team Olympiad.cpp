#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int a[n],a1[n],a2[n],a3[n];

        memset(a,0,0);
        memset(a1,0,0);
        memset(a2,0,0);
        memset(a3,0,0);

        int x=0,y=0,z=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]==1)
            {
                a1[++x]=i+1;
            }
            else if(a[i]==2)
            {
                a2[++y]=i+1;
            }
            else
            {
                a3[++z]=i+1;
            }
        }
        int b[n];
        b[0]=x,b[1]=y,b[2]=z;
        sort(b,b+3);

        int w=b[0];

        cout<<w<<endl;
        if(w!=0)
        {
            for(int i=1;i<=w;i++)
            {
                cout<<a1[i]<<' '<<a2[i]<<' '<<a3[i]<<endl;
            }
        }
    }

    return 0;
}

