#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int l = strlen(ch);
    int count=0;
    for(int i=0;i<l;i++){
        if(ch[i]=='4' || ch[i]=='7')count++;
    }
    if(count==7 || count == 4){
        printf("YES");
    }
    else printf("NO");
}
