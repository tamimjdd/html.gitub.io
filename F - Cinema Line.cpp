#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        int a[100010],count=0,count2=0,flag=0;

        for(int i=1;i<=n;i++)
            cin>>a[i];

        for(int i=1;i<=n;i++)
        {
            if(a[i]==25)
                count++;
            else if(a[i]==50)
            {
                count--;
                count2++;

                if(count<0)
                {
                    flag=1;
                    break;
                }
            }
            else if(a[i]==100)
            {
                if(count2>=1)
                {
                    count2--;
                    count--;
                }
                else
                {
                    count=count-3;
                }
                if(count<0)
                {
                    flag=1;
                    break;
                }

            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
