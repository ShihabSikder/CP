#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int n,num[3];
    scanf("%d %d %d %d",&n,&num[0],&num[1],&num[2]);
    sort(num,num+3);
    printf("%d",num[0]);
}

