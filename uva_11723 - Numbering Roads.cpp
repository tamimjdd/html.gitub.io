#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,n,testcase=0;

    while(cin>>r>>n)
    {
        testcase++;

        if(r==0 && n==0)
            return 0;
        else
        {
            if(r<=n)
                cout<<"Case "<<testcase<<": 0"<<endl;
            else
            {
                float rest=r-n;
                int maximum=(26*n)+n;

                if(r>maximum)
                    cout<<"Case "<<testcase<<": impossible"<<endl;
                else
                    cout<<"Case "<<testcase<<": "<<ceil(rest/n)<<endl;
            }
        }
    }

    return 0;
}
