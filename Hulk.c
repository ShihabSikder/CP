#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n==1){
            printf("I hate ");
            continue;
        }
        if(i%2==0){
            printf("I love ");
            if(n>i) printf("that ");
            continue;
        }
        if(i%2==1){
            printf("I hate ");
            if(n>i) printf("that ");
            continue;
        }
    }
    printf("it");
}
