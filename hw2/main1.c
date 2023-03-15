#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 69
#define MID 10
#define MIN 01
#define N 6
int main()
{
    int z;
    printf("輸入數量\n");
    scanf("%d", &z);
    printf("========= lotto649 =========\n");
    time_t curtime;
    time(&curtime);
    printf(ctime(&curtime)," =\n");
    int y;
    int step=1;
    for (y=0;y<z;y++){
    int RandNum,a[6];
    int i,j,flag=0,t=0;
    srand(time(NULL)*clock());
    int Num= (rand()%MID);
    printf("[");
    printf("%d",step);
    step++;
    printf("]:");
for (i=0;i<N;i++)
{  
    RandNum = (rand()%MAX);
    for(i=0;i<t;i++)
    {
        if(a[i]==RandNum||a[i]==Num)
             flag=1;
             
    }
    if(flag !=1){
        a[t]=RandNum;
        printf("%1d ",a[t]);
        t++;
    }
    }
    printf("%1d \n",Num);
    }
    printf("========= csie@CGU =========\n");

    return 0;
}

