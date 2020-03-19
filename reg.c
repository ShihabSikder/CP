#include<stdio.h>
#include<string.h>

int main()
{
    unsigned int n,count=0;
    scanf("%d",&n);
    char name[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",&name[i]);
    }

    for(int i=0;i<n;i++){
            count =0;
        for(int j=0;j<i;j++){
            if( strcmp(name[i],name[j])==0)
            count++;
        }
    if(count==0) printf("OK\n");
    else printf("%s%d\n",name[i],count);
    }

}
