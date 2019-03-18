#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long N,ans;

    int testcase=1;

    while(cin>>N)
    {
       unsigned long long int mid;

        if(N==0)
            return 0;
        else
        {
         unsigned  long long  int left=3,right=100000000;

            while(left<=right)
            {
                mid=(left+right)/2;

                unsigned long long sum=(mid*(mid-3))/2;

                //cout<<left<<' '<<mid<<' '<<right<<' '<<sum<<endl;

                if(N<=sum)
                {
                    right=mid-1;
                    ans=mid;
                }
                else
                    left=mid+1;
            }
        }
        cout<<"Case "<<testcase<<": "<<ans<<endl;

        testcase++;
    }

    return 0;
}

