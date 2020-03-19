#include<stdio.h>
#include<string.h>

int main(){
 char ch[200];
 gets(ch);
 int length1 = strlen(ch);
 char input[length1];
 int i=0,j=0;
 for(int i=0;i<length1;i++,j++){
    if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B') {input[j]=' ';i+=2;continue;}
    //if(ch[i-1]=='W' && ch[i]=='U' && ch[i+1]=='B') {input[i]=' ';continue;}
    //if(ch[i-2]=='W' && ch[i-1]=='U' && ch[i]=='B') {input[i]=' ';continue;}
    else input[j]=ch[i];
 }
 puts(input);
//space deleter from string
 int length = strlen(input);
    char output[length];
    int fc=0,k=0;i=0;
    while(input[i]!='\0'){
        if(input[i]==' ' && fc==0){ i++;continue;}
        if(input[i]!=' ' && fc==0){ fc=1;output[k]=input[i];i++;k++;continue;}

        if(input[i]==' ' && fc==1){
            while(input[i]==' '){
                if(input[i+1]!=' '){
                   output[k]=' ';output[k+1]=input[i+1];
                   k++;i++;
                }
                else{
                    i++;continue;
                }
            }
        }
        if(input[i]!=' ' && fc == 1){
            output[k]=input[i];k++;i++;continue;
        }
    }

 puts(output);


}
