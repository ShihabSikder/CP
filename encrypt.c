#include<stdio.h>
#include<string.h>
char enc(char c){
    if (c == ' ') return ' ';
    else {
        c = (c + 3)%26;
        return c;
    }
}

int main(){
    char sen[1000];
    gets(sen);
    for(int i=0;i<strlen(sen);i++){
        printf("%d ",enc(sen[i]));
    }
}
