#include<stdio.h>

int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int temp=n;
    for(int i=1;;i++){
        sum = (i*(i+1))/2;

        if(temp-sum>=0){
            temp -= sum;
            count++;
        }
        else break;
    }
    printf("%d",count);
}
