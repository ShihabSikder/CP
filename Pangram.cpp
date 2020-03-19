#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    char str[n+5];
    scanf("%s",str);
    for(int i=0;i<n;i++){
        str[i] = tolower(str[i]);
    }
    sort(str,str+n);
    int count =0;
    for(int i=0;i<n-1;i++){
        if(str[i]!=str[i+1])
            count++;
    }
    if(count==25) printf("YES");
    else printf("NO");
}
