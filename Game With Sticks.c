#include<stdio.h>

int main()
{
     int m,n,temp=0,i=1;
     scanf("%d %d",&m,&n);
     while((m*n)!=0){

        if(i%2==0){
            temp = 1; i++; m--;n--;continue;
        }
        else if(i%2!=0){
            temp = 0; i++; m--;n--;continue;
        }
     }
     if(temp == 1) printf("Malvika");
     else printf("Akshat");
}
