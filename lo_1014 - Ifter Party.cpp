#include<bits/stdc++.h>
using namespace std;

int arr[1000000];

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int p,l;
        cin>>p>>l;

        int q=p-l;

        if(l>=q)
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
        else
        {
            int x=-1;
            cout<<"Case "<<i<<": ";

            for(int j=1;j<=sqrt(q);j++)
            {
                if(q%j==0)
                {
                    if(j==q/j && j>l)
                        arr[++x]=j;
                    else
                    {
                        if(j>l)
                            arr[++x]=j;
                        if(q/j>l)
                            arr[++x]=q/j;
                    }
                }
            }
            sort(arr,arr+(x+1));
            for(int j=0;j<=x;j++)
            {
                cout<<arr[j];

                if(j!=x)
                    cout<<' ';
            }

            cout<<endl;
        }
    }

    return 0;
}
