#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
int main(){
    int x;
    scanf("%d",&x);
    int num[x+1];
    for(int i=0;i<x;i++)
        scanf("%d",&num[i]);
    if(x==1){
        printf("0");
       return 0;
    }
    int sum=0;
    sort(num,num+x);
    int temp = num[x-1];
    for(int i=0;i<x-1;i++){
        sum = sum + temp-num[i];
    }
    printf("%d",sum);
}
