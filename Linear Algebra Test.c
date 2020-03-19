#include<stdio.h>

int main(){
    int t;
    int count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n][2];
        for(int i=0;i<n;i++){
            scanf("%d %d",&arr[i][0],&arr[i][1]);
        }

        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[j][1]==arr[k][0]){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
}
