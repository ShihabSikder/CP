#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int check[26];
    for(int i=0;i<26;i++){
        check[i]=0;
    }
    char str[n+5];
    scanf("%s",&str);
    for(int i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
        int tmp = atoi(str[i])-97;
        check[tmp] = 1;
    }
    puts(str);
    for(int i=0;i<26;i++){
        if(check[i]==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
