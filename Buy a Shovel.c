#include<stdio.h>

int main(){
    int price,coin,i;

    scanf("%d %d",&price,&coin);
    for(i=1;;i++){
     if((price*i)%10==0){
        break;
     }
     else if((price*i)%10==coin)
            break;
    }
    printf("%d",i);
}
