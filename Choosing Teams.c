#include<stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int num[x];
    for(int i=0;i<x;i++)
        scanf("%d",&num[i]);
    int count = 0;
    for(int i=0;i<x;i++)
    {
        if(5-num[i]>=y)
            count++;
    }
    printf("%d",count/3);
    }

