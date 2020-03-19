#include<stdio.h>
#include<string.h>
int main(){
 char ch[500];
 gets(ch);
 int l= strlen(ch);
 int count = 1;
 for(int i =1;i<l;i++){

 if(ch[i]==ch[i-1]){
    count++;
    if(count== 7){
        printf("YES");
        break;
    }
 }
    else count = 1;
 }
 if(count < 7)
 printf("NO");
 return 0;
}
