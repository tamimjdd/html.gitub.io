#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;

        int a[2][n];

        int multi[2];
        multi[0]=1,multi[1]=1;

        for(int j=0;j<2;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>a[j][k];

                multi[j]=multi[j]*a[j][k];
            }int prime_fact=multi[0];
        }
        long long sum=1;
        for(int j=0;j<n;j++)
        {
            sum=sum*pow(a[0][j],a[1][j]);
        }

        int prime_fact=multi[0];
        int result=prime_fact;

        for(int j=0;j<n;j++)
        {
            prime_fact=multi[0];

            int total=prime_fact*a[0][j];

            while(total<=sum)
            {
                result=result+total;
                total=a[0][j]*total;
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
