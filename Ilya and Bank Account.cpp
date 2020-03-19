#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    scanf("%ld",&n);
    long int a=0,b=0;
    if(n>0)
        printf("%ld",n);
    else{
        a = n/10;
        b = n/100 *10 + n%10;
        printf("%ld",max(a,b));
    }
    return 0 ;
}
