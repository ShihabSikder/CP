#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1 && n){
        priority_queue<int, vector<int>,greater<int>>num;
        //vector<int>input;
        long long int ans=0;//baler long long

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            num.push(temp);
        }
        while(num.size()>1){
            int operand1=num.top();num.pop();
            int operand2=num.top();num.pop();
            ans+= operand1+operand2;
            num.push(operand1+operand2);
        }
        printf("%lld\n",ans);
    }
}
