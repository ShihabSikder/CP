#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    char img[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>img[i][j];
        }
        }


    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            if((img[i][j]!='B')&&img[i][j]!='W'&&img[i][j]!='G')
            {
               printf("#Color");
               return 0;
            }

        }
       printf("#Black&White");

}
