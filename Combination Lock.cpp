#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n,cnt=0;
    scanf("%d",&n);
    char key1[n],key2[n];
    scanf("%s",key1);
    scanf("%s",key2);
    for(int i=0;i<n;i++){
        int x = max(key1[i],key2[i]);
        int y = min(key1[i],key2[i]);
        if(x-y<=5){
            cnt+= (x-y);
        }else{
            cnt += 10 - (x-y);
        }
    }
    printf("%d",cnt);
    return 0;
}
