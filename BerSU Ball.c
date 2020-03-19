#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int boys[n];
    for(int i=0;i<n;i++){
        scanf("%d",&boys[i]);
    }
    int m;
    scanf("%d",&m);
    int girls[m];
    for(int i=0;i<m;i++){
        scanf("%d",&girls[i]);

    }
    int count=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if( abs((boys[i] -girls[j]))<=1){
            count++;
            girls[j]=1000;
            }
        }
    }
     printf("%d",count);
    }
