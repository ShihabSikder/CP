#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int,int>num[n];
    for(int i = 0;i<n;i++){
       scanf("%d %d",&num[i].first,&num[i].second);
    }
    sort(num,num+n);
    for(int i=0;i<n-1;i++){
        if(num[i].first<num[i+1].first 
            && num[i].second>num[i+1].second
        ){
            cout<<"Happy Alex\n";
            return 0;
        }
    }
    cout<<"Poor Alex\n";
}