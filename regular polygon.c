#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,a;
    float j;
    scanf("%d",&x);
    while(x--){
        scanf("%d",&a);
        for(float i=3;i<=400;i++){
            j = ((i-2.0)*180)/i;
            if(a==(float)j){
                printf("YES\n");
                break;
            }
            if(a>(float)j){
                printf("NO\n");
                break;
            }
        }
    }
}
