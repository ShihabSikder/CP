#include<stdio.h>
#include<string.h>

int main()
{
    long int n,i,j;
    scanf("%ld",&n);
    int c[n];
    for( int i=0;i<n;i++ ){
        c[i]=0;
    }
    char name[n][100];
    for( int i=0;i<n;i++ ){
        scanf("%s",&name[i]);
    }


    for( int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if( strcmp(name[i],name[j])== 0){
                c[i]++;
            }
        }
       if( c[i] == 0 ) printf("OK\n");
       else printf("%s%d\n",name[i],c[i]);

    }

}
