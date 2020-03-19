#include<stdio.h>

int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    int e=0,o=0;
    if(n%2==0){
        sum = n/2;
        printf("%lld",sum);

    }
    else{
        sum = -1*((n+1)/2);
        printf("%lld",sum);
    }

  }

