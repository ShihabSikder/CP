#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int p[n],q[n];
    int level[n];
    for(int i=0;i<n;i++) level[i]=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&p[i]);
        level[p[i]-1]++;

    }
    int y;
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        scanf("%d",&q[i]);
        level[q[i]-1]++;
    }

    int flag =0;
    for(int i=0;i<n;i++){
        if(level[i]>0) flag =1;
        else { flag=0;break ;}
    }

    /*for(int i = 0;i<n;i++)
    printf("%d  ",level[i]);*/

    if(flag == 1) printf("I become the guy.");
    else printf("Oh, my keyboard!");
}
