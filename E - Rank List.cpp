#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    while(cin>>n>>k)
    {
        int a[55],b[55];

        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(a[j]>a[j-1])
                {
                    int temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;

                    int temp2=b[j];
                    b[j]=b[j-1];
                    b[j-1]=temp2;
                }
            }
        }
//        cout<<endl;
//        for(int i=0;i<n;i++)
//        {
//            cout<<a[i]<<' '<<b[i]<<endl;
//        }
//
//        cout<<endl;

        for(int k=1;k<n;k++)
        {
            int count=0,count2=0,left,right;
            for(int i=k;i<n;i++)
            {
                if(a[i]==a[i-1])
                {
                    count2=1;
                    if(count==0)
                    {
                        left=i-1;
                        right=i;
                        count=1;
                    }
                    else
                        right=i;
                }
                else
                    break;
            }
            //cout<<"left1= "<<left<<' '<<right<<endl;
            if(count2==1)
            {
                for(int q=1;q<=(right-left);q++)
                {
                    for(int j=left+1;j<=right;j++)
                    {
                        if(b[j]<b[j-1])
                        {
                            int temp=b[j];
                            b[j]=b[j-1];
                            b[j-1]=temp;

                            int temp2=a[j];
                            a[j]=a[j-1];
                            a[j-1]=temp2;
                        }
                    }
                }
                k=right+1;
            }
            //cout<<"left= "<<left<<' '<<right<<endl;
        }

        int psolved=a[k-1];
        int ptime=b[k-1];
        int yes=0;

        for(int p=0;p<n;p++)
        {
            if(a[p]==psolved && b[p]==ptime)
            {
                yes++;
            }
        }
        cout<<yes<<endl;
//        for(int i=0;i<n;i++)
//        {
//            cout<<a[i]<<' '<<b[i]<<endl;
//        }
//
//        cout<<endl;
    }

    return 0;
}
/*
5 2
1 2
1 1
1 2
1 1
1 2

9 2
5 3
4 2
5 5
5 6
2 1
4 3
6 1
5 2
5 3
*/
