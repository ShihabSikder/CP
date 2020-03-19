#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int num[a];
    for(i=0;i<a;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<a;i++)
        tPrime(num[i]);

}

int tPrime(int x){
    int count = 1;
    for(int j=3;j<sqrt(x);j++){
        if(x%j==0){
            count++;
        }
    }
    if(count==3){
        printf("YES");
    }
    else printf("NO");
}
