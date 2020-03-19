#include<stdio.h>

int main(){
    char move[2];
    gets(move);
    int flg=0;
    if(move[1]=='1'||move[1]=='8') flg++;
    if(move[0]=='a'||move[0]=='h') flg++;
    if(flg == 0) printf("8");
    else if(flg == 1) printf("5");
    else {printf("3");}
    return 0 ;
}
