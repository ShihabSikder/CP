#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='A'){ a++;}
        if(ch[i]=='D'){ d++;}
    }
    if(a>d)printf("Anton");
    else if(a<d)printf("Danik");
    else if(a==d) printf("Friendship");
}
