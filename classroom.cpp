#include<bits/stdc++.h>
using namespace std;

int numberOfClasses,memory[1000][30][30];

struct schedule
{
    int start,finish;
};
schedule cls[200];

bool operator < (schedule a,schedule b)
{
    if(a.start!=b.start)
        return a.start<b.start;
    else
        return a.finish<b.finish;
}

int solve(int index,int room1,int room2)
{
    if(index>=numberOfClasses)
        return 0;
    if(room1>=24 && room2>=24)
        return 0;
    if(memory[index][room1][room2]!=-1)
        return memory[index][room1][room2];

    int x=0,y=0,z=0;

    if(cls[index].start>=room1 && cls[index].start<24)        //Assuming that a class can end & another class can start at the same time.
        x=solve(index+1,cls[index].finish,room2)+1;

    if(cls[index].start>=room2 && cls[index].start<24)
        y=solve(index+1,room1,cls[index].finish)+1;

    z=solve(index+1,room1,room2);

    return memory[index][room1][room2]=max(x,max(y,z));
}
int main()
{
    while(cin>>numberOfClasses)
    {
        memset(memory,-1,sizeof(memory));

        for(int i=0;i<numberOfClasses;i++)
            cin>>cls[i].start>>cls[i].finish;

        sort(cls,cls+numberOfClasses);

        cout<<"Class Sorted= "<<endl;
        for(int i=0;i<numberOfClasses;i++)
            cout<<cls[i].start<<' '<<cls[i].finish<<endl;
        cout<<endl;

        int res=solve(0,0,0);

        cout<<"Total possible classes= "<<res<<endl;
    }

    return 0;
}
/*
7
07:01 12:23
09:34 11:24
13:43 14:59
15:00 15:01
13:43 17:59
13:43 16:54
12:32 16:54
Correct Answer: 5

7
7 12
9 11
13 14
15 15
13 17
13 16
12 16
Correct Answer: 5
*/
