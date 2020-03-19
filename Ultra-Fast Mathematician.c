#include<stdio.h>
#include<string.h>

int main(){
 char input1,input2;
 gets(input1);
 gets(input2);

 for(int i=0; i<strlen(input1) ; i++){
   if(input1[i] == input2[i]) {

        input1[i] = '0';

   }
   else {

        input1[i] = '1';

   }
 }
 puts(input1);
}

