#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s,g[5]={0};
    while(n--){
        scanf("%d",&s);
        if( s == 4 ) g[4]++;
        else if( s == 3 ) g[3]++;
        else if( s == 2 ) g[2]++;
        else  g[1]++;
    }
   int total =0;
   total = g[4]+g[3]+g[2]/2 ;
   g[1] = g[1]-g[3];
   if(g[2]%2 == 1){
    total++;
    g[1] = g[1] - 2;
   }
   if(g[1]>0){
    total+= (g[1]+3)/4;
   }
   printf("%d",total);

}
