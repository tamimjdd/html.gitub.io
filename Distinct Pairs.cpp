#include<bits/stdc++.h>
using namespace std;

struct st
{
    int a,b;
};

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int a[n],b[m];

        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+m);

        for(int i=0;i<m;i++)
            cout<<0<<' '<<i<<endl;

        for(int i=1;i<n;i++)
            cout<<i<<' '<<m-1<<endl;
    }

    return 0;
}

