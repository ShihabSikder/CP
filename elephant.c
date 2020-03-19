#include<stdio.h>

int main(){
 int x,count=0;
 scanf("%d",&x);
 while(x>0){
 if(x/5 > 0) { count = count + x/5;x%=5; }
else if(x/4 > 0) { count = count + x/4; x%=4; }
else if(x/3 > 0) { count = count + x/3; x%=3;}
else if(x/2 > 0) { count = count + x/2; x%=2;}
else if(x/1 > 0) { count = count + x/1; x%=1;}
}
printf("%d",count);
}
