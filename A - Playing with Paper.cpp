
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;

    while(cin>>a>>b)
    {
        long long sum=0;

        while(a!=0 && b!=0)
        {
            long long amax=max(a,b);
            long long bmin=min(a,b);

            sum=sum+(amax/bmin);

            a=bmin;
            b=amax%bmin;

            if(a==1)
            {
                sum=sum+b;
                break;
            }
            else if(b==1)
            {
                sum=sum+a;
                break;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
