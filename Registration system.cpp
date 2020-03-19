#include<iostream>
#include<string>
#include<map>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    map<string,int>reg;
    string s;
    while(n--){
        cin>>s;
        if(reg.count(s)==0){
            printf("OK\n");
            reg[s]=1;
        }
        else{
            cout<<s<<reg[s]<<endl;
            reg[s]=reg[s]+1;
        }
    }
    return 0;
}
