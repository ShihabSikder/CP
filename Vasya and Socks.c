#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int count=1;

    while(n!=1){
        n--;
        count++;
        if(count%m==0) n++;
    }

    printf("%d",count);
}

