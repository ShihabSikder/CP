#include<stdio.h>
#include<math.h>

int main(){
    long long int n;
    long long int sum=0;
    scanf("%lld",&n);
    while(n>0){
        if(n%2==1){
            sum++;
            n--;
        }
        else {
            n/=2;
        }
    }
    printf("%d",sum);
}
