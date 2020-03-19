#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int money[n];
    for(int i=0;i<n;i++)
        cin>>money[i];
    sort(money,money+n);
    int total=0;
    for(int i=0;i<t;i++){
        if(money[i]>=0) break;
        total+=money[i];
    }
    cout<<-1*total<<endl;
}
