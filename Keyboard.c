#include<stdio.h>
#include<string.h>

int main(){
    char L1[]="qwertyuiop";
    char L2[]="asdfghjkl;";
    char L3[]="zxcvbnm,./";

    char ch;
    scanf("%c",&ch);
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    int pos;

    if(ch == 'R'){
    for(int i=0;i<len;i++){
        for(int j=0;j<=9;j++){
            if(str[i]==L1[j]) str[i]=L1[j-1];
            else if(str[i]==L2[j]) str[i]=L2[j-1];
            else if(str[i]==L3[j]) str[i]=L3[j-1];
        }
    }

    }
    else if(ch=='L'){
        for(int i=0;i<len;i++){
        for(int j=9;j>=0;j--){
            if(str[i]==L1[j]) str[i]=L1[j+1];
            else if(str[i]==L2[j]) str[i]=L2[j+1];
            else if(str[i]==L3[j]) str[i]=L3[j+1];
        }
    }
    }
    puts(str);
}
