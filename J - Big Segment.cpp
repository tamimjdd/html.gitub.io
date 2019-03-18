#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int l[n],r[n],a[n],b[n];

        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];

            a[i]=l[i];
            b[i]=r[i];
        }
        sort(l,l+n);
        sort(r,r+n);

        int left=l[0];
        int right=r[n-1];
        int res=0,flag=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]==left && b[i]==right)
            {
               flag=1;
               res=i+1;
               break;
            }
        }
        if(flag==1)
            cout<<res<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}

