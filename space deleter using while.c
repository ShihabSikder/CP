#include<stdio.h>
#include<string.h>

int main()
{
    char input[200];
    gets(input);
    int length = strlen(input);
    char output[length];
    int i=0,fc=0,k=0;
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
