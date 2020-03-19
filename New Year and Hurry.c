#include<stdio.h>

int main(){
    int x,t,count=0;
    scanf("%d %d",&x,&t);
    int t_remaining = 240 - t;
    for(int i=1;i<=x;i++){
        t_remaining = t_remaining - 5*i;
        if(t_remaining<0)
            break;
        count++;
    }
    printf("%d",count);
}
