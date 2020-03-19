#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int count=0;
    for(int i=1;i<=m;i++){
        if((n%i==0)&&(n/i<=m)){
            count++;
        }
    }
    printf("%d",count);
}
