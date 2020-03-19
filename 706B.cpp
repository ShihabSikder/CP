#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int x,temp,result;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>temp;
        result = upper_bound(a,a+n,temp)-a;
        cout<<result<<endl;
    }
}
