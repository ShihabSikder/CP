#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


bool cmp( int a,int b ){
    return a>b;
}
int x[300];
int num[300];

int main(){
        int k,n;
        cin>>n>>k;

        for(int i= 0; i<n; i++){
        cin>>x[i];
    }

    for(int i= 0; i<k; i++){
        cin>>num[i];
    }
    sort(num,num+k,cmp);
    int j=0;
    for(int i= 0; i<n; i++){
        if(x[i] == 0){
            x[i]= num[j];
            j++;
        }
    }
    for(int i= 1; i<n; i++){
        if(x[i-1] >= x[i]){
            cout<< "Yes" <<endl;
            return 0;
        }
    }
     cout<< "No" <<endl;
    }

