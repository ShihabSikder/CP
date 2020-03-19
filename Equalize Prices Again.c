#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int temp,sum=0;
        scanf("%d",&temp);
        int num;
        for(int i=0;i<temp;i++){
            scanf("%d",&num);
            sum+=num;
        }
        if(sum%temp==0) printf("%d\n",sum/temp);
        else{
            double t=0;
            t = sum/temp;
            t = ceil(t);
            printf("%f",t+1);
        }
    }
}
