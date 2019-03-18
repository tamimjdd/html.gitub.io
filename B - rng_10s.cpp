#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        unsigned long long a,b,c,d,temp;

        scanf("%llu%llu%llu%llu",&a,&b,&c,&d);
        temp=a;

        int flag=0,j;
        unsigned long long rest;

        map<unsigned long long,int>m;

        for(j=1;j<=10000;j++)
        {
            if(temp<b || d<b)
            {
                flag=1;
                break;
            }
            else
            {
                rest=temp%b;

                if(m[rest]==1)
                {
                    //flag=2;
                    break;
                }
                else
                {
                    m[rest]=1;

                    if(rest>c)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        temp=rest+d;
                    }
                }
            }
        }
        if(flag==1)
            printf("No\n");
        else// if(flag==2)
            printf("Yes\n");
    }

    return 0;
}
