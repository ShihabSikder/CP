#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
        int count=0;
        while(a<=b){
            a = 3*a;
            b = 2*b;
            count++;
        }
        printf("%d",count);

}
