#include<stdio.h>

int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    if(t==10){
        if(n==1){
            printf("-1");
        }
        else{
            for(int i=0;i<n-1;i++){
                printf("1");
            }
            printf("0");
        }
    }else{
        for(int i=0;i<n;i++){
            printf("%d",t);
        }
    }
    return 0;
}
