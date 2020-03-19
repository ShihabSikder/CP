#include<stdio.h>
#include<string.h>

int main()
{
    char input[200];
    gets(input);
    int length = strlen(input);
    char output[length];
    int i=0,fc=0,k=0;
    for(int i=0;i<length;i++){
        if(input[i]==' ' && fc==0){ continue;}
        if(input[i]!=' ' && fc==0){ fc=1;output[k]=input[i];k++;continue;}

        if(input[i]==' ' && fc==1){
            while(input[i]==' '){
                if(input[i+1]!=' '){
                   output[k]=' ';output[k+1]=input[i+1];
                   k+=2;i+=2;
                }
                else{
                    i++;continue;
                }
            }
        }
        if(input[i]!=' ' && fc==1){
            output[k]=input[i];k++;continue;
        }
    }
puts(output);
}
