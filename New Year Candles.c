#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int temp = a/b;
    int sum = a;
    for(int i=0;;i++){

    temp = a/b;
    sum = sum + temp;
    temp += a%b;
    if( temp < b ) break;
    a = temp;

    }
    printf("%d",sum);

}
