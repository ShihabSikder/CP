#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
 char string[100];
 gets(string);
 int length= strlen(string),up=0,low=0;
 for(int i=0;i<length;i++){
    if(string[i]>='A' && string[i]<='Z')up++;
    else if(string[i]>='a' && string[i]<='z') low++;
 }
 //printf("%d %d",up,low);
 if(low>=up)printf("%s",strlwr(string));
 else printf("%s",strupr(string));
}
