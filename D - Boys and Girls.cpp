#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,m;
    string s="";

    cin>>n>>m;

    if(n>m)
    {
        int cn=n,cm=m;

        for(int i=1;i<=n;i++)
        {
            if(cn>0)
            {
                s=s+'B';
                cn--;
            }
            if(cm>0)
            {
                s=s+'G';
                cm--;
            }
        }
        cout<<s<<endl;
    }
    else if(m>=n)
    {
        int cn=n,cm=m;

        for(int i=1;i<=m;i++)
        {
            if(cm>0)
            {
                s=s+'G';
                cm--;
            }
            if(cn>0)
            {
                s=s+'B';
                cn--;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
