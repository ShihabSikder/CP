#include<stdio.h>
#include<string.h>

int main(){
 char num[100];
 gets(num);
 int temp=0;
 int l= strlen(num);
 for(int i = 0; i<l;i+=2){
        int temp = 0;
    for(int j=i+2;j<l;j+=2){
        if(num[i]>num[j]){
            temp = num[i];
            num[i]=num[j];
            num[j]=temp;
        }
    }
}
puts(num);

}
