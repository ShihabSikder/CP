#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    gets(ch);
    int l = strlen(ch);
    int flag = 0;
    int flag1 = 0;
    if(ch[0]>='a' && ch[0]<='z') flag1=1;
    for(int i=1;i<l;i++){
            if(ch[i]>='A' && ch[i]<='Z') flag = 1;
            else {flag=0;break;}
    }

    if(flag==1 && flag1==1){
        if(ch[0]>='a' && ch[0]<='z') ch[0]= ch[0]-32;
        for(int i=1;i<l;i++){
            ch[i] = ch[i]+32;
        }
    }
    else if( flag==1 && flag1==0 ){
        for(int i=0;i<l;i++){
            ch[i] = ch[i]+32;
        }
    }
    else if(l==1){
        if(ch[0]>='a' && ch[0]<='z') ch[0] = ch[0]-32;
        else ch[0]=ch[0]+32;
    }

puts(ch);
}
