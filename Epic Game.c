#include<stdio.h>

int gcd(int a, int b){
    int gcd = 0;
    if(a==0) return b;
    else if(b==0) return a;
    else{
        for(int i=1;i<=a && i<=b;i++){
            if(a%i==0 && b%i==0){
                gcd = i;
            }
        }
        return gcd;
    }
}

int main(){
    int turn=0;
    int x,y,n;
    scanf("%d %d %d",&x,&y,&n);
    while(1){
        n-=gcd(x,n);
        if(n<=0){
            printf("0");
            break;
        }
        n-=gcd(y,n);
        if(n<=0){
            printf("1");
            break;
        }
    }
    return 0 ;
}
