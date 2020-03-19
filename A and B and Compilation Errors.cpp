#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,x;
    cin>>x;
    int a=0,b=0,c=0;

    for(int i=0;i<x;i++){
        scanf("%d",&n);
        a+=n;
    }
    for(int i=0;i<x-1;i++){
        scanf("%d",&n);
        b+=n;
    }
    for(int i=0;i<x-2;i++){
        scanf("%d",&n);
        c+=n;
    }
    printf("%d\n%d",a-b,b-c);
}
