#include<stdio.h>
int main(){
    int n,r=1;
    scanf("%d",&n);
    char name[5][100] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while(r*5<n)
        {
        n-=r*5;
        r*=2;
        }
        n = n-1;
        n=n/r;
        printf("%s",name[n]);
}
