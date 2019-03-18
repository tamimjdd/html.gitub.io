#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    while(cin>>n>>k)
    {
        int a[n],count=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            int temp=a[i],flag=0,tempcount=0,luckycount=0;

            while(temp!=0)
            {
                if(temp%10==4 || temp%10==7)
                {
                    luckycount++;
                }
                temp=temp/10;
                tempcount++;

            }
            if(tempcount<=k)
            {
                count++;
            }
            else if(tempcount>k)
            {
                if(luckycount<=k)
                    count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
