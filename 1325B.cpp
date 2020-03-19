#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        int num[x];
        for(int i=0;i<x;i++)
            cin>>num[i];
        sort(num,num+x);
        int c=0;
        for(int i=0;i<x;i++){
            if(num[i]==num[i+1]) continue;
            else c++;
        }
        cout<<c<<endl;
    }

}
