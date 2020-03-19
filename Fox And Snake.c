#include<stdio.h>

int main()
{
    int m,n;
    int count=1;
    scanf("%d %d",&m,&n);
    for(int i=1; i<=m; i++)
    {
        if(i%2 == 1)
        {
            for(int j=1; j<=n; j++)
            {
                printf("#");
                //if(j==n) printf("\n");
            }
        }
        else {
            if(count%2==1){
                for(int j=1;j<=n;j++){
                    if(j<n) printf(".");
                    else if(j==n) {printf("#");}
                }
            }
            else {
                for(int j=1;j<=n;j++){
                    if(j==1) printf("#");
                    else {printf(".");}
                }
            }
            count++;
        }
    printf("\n");
    }
}

