#include<stdio.h>

int main(){
    int x,temp,x=0,y=0,z=0;
    scanf("%d",&x);
    int num[x];
    int x[5000],y[5000],z[5000];
    for(int i=0;i<x;i++){
          scanf("%d",&num[i]);
          if(num[i]==1){
            x[x]=i+1;
            x++;
          }
          else if(num[i]==2){
            y[y]=i+1;
            y++;
          }
          else if(num[i]==3){
            z[z]=i+1;
            z++;
          }
    }


}
