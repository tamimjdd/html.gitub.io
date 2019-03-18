#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int x[110];

        for(int i=0;i<n;i++)
            cin>>x[i];

        sort(x,x+n);

        int count=1,p=-1;

        for(int i=1;i<n;i++)
        {
            if(x[i]!=999 && x[i]>=count)
            {
                count++;
                x[i]=999;
            }

            else
            {
                a[++p]=x[i];
            }
        }
    }

    return 0;
}
