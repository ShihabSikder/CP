#include<stdio.h>
#include<math.h>

int primeFactor(int n){
    while(n%2 ==0){
    printf("2 ");
    n/=2;
    }
    for(int i=3; i<=sqrt(n);i+=2){
        while(n%i==0){
            printf("%d ",i);
            n/=i;
        }
    }
    if(n>2)printf("%d ",n);
}

int main(){
    int x;
    int count =0;
    scanf("%d",&x);
    printf("%d",x/2);
    primeFactor(x);
}
