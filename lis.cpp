#include<bits/stdc++.h>
using namespace std;

int a[10000];
int memory[1000][1000];

int lis(int cur_pos,int last_pos,int sz)
{
    if(memory[cur_pos][last_pos]!=-1)
        return memory[cur_pos][last_pos];

    //cout<<"cur pos="<<cur_pos<<" last_pos="<<last_pos<<endl;

    if(cur_pos>sz)
	    return 0;

    int x=0,y=0;

    if(a[cur_pos]>a[last_pos])
    {
        //cout<<"calling "<<cur_pos+1<<" "<<cur_pos<<endl;
        x=lis(cur_pos+1,cur_pos,sz)+1;
    }

    y=lis(cur_pos+1,last_pos,sz);
    //cout<<"last pos="<<last_pos<<" cur_pos="<<cur_pos<<" x="<<x<<" y="<<y<<endl;

    return memory[cur_pos][last_pos]=max(x,y);
}

int main()
{
    int n;

	while(cin>>n)
	{
        memset(a,0,10000);
        memset(memory,-1,sizeof(memory));

        a[0]=-1;
		for(int i=1;i<=n;i++)
			cin>>a[i];

		cout<<lis(1,0,n)<<endl;
	}
	return 0;
}
/*
6
5 1 3 2 8 7
*/
