#include<stdio.h>
#include<string.h>


int main() {
 int x;
 scanf("%d",&x);
 char ch[x];
 scanf("%s",&ch);
 int count=0;
 for(int i=0;i<x;i++){

  if(ch[i]==ch[i+1]) count++;
  else continue;

 }
 printf("%d",count);
}

