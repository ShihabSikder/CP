#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int growth[12];
    for(int i=0; i<12; i++)
    {
        cin>>growth[i];
    }
    sort(growth,growth+12,greater<int>());
    if(n==0)
    {
        cout<<"0";
        return 0;
    }
    int temp=0,i=0;
    for(i=0; i<12; i++)
    {
        temp+=growth[i];
        if(temp>=n) break;
    }
    if(temp>=n)
    {
        cout<<i+1;
    }
    else if(temp<n)
    {
        cout<<"-1";
    }
}
