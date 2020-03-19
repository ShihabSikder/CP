#include<stdio.h>

int main(){
    int m,n;
    int count=0;
    scanf("%d %d",&m,&n);
    while(m!=n){
        if(m>n){
            n++;
            count++;
        }
        else if(m<n){
            if(n%2==0) {
                n/=2;
                count++;
            }else{
                n++;
                count++;
            }
        }
    }
    printf("%d",count);
}
