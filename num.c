#include<stdio.h>
int main(){
 long long int n;
 scanf("%lld",&n);
 long long int sum=0;
 if(n%2==0) {printf("Even");
 sum = n/2;
 printf("%lld",sum);
 }
 else printf("ODD");
}
