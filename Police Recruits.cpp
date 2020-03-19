#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(int i =0;i<n;i++){
        if(num[i]>0){
            sum+=num[i];
        }
        else if(sum>0)
            sum--;
        else
            count++;
    }
    printf("%d",count);
}
