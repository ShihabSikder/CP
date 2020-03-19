#include<stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int drinks[n];
 long  double sum = 0;
 for(int i = 0;i<n;i++){
    scanf("%d",&drinks[i]);
    sum = drinks[i]+sum;
 }
 printf("%llf",sum/n);
}
