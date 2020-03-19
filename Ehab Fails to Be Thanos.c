#include<stdio.h>

int main(){
 int n;
 scanf("%d",&n);
 int arr[2*n];
 int num1=0, num2=0;
 for(int i=0;i<2*n;i++){
    int temp;
    scanf("%d",&temp);
    if(i<n) num1+=temp;
    if(i>n) num2+=temp;
 }
    if(num1==num2) printf("1");
    else printf("-1");
}
