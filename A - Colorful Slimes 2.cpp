#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int a[n],b[n],counter=1,res=0;

        memset(b,0,sizeof(b));

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            {
                counter++;
            }
            else
            {
                res=res+(counter/2);
                counter=1;
            }
        }
        cout<<res+(counter/2)<<endl;
    }

    return 0;
}
