#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int T=1;T<=t;T++)
    {
        int n,a,b;
        cin>>n>>a>>b;

        int temp,alice=0,bob=0;

        for(int i=0;i<n;i++)
        {
            cin>>temp;

            if(temp%a==0)
                bob++;
            else if(temp%b==0&&temp%a!=0)
                alice++;
        }

        if(alice>=bob)
            cout<<"ALICE"<<endl;
        else
            cout<<"BOB"<<endl;
    }

    return 0;
}
