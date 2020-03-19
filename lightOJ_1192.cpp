#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,result=0;
    for(int i=1;i<=t;i++){
        result = 0;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a>>b;
            result = result xor (b-a-1);
        }
        if(result){
            cout<<"Case "<<i<<": Alice"<<endl;
        }
        else
            cout<<"Case "<<i<<": Bob"<<endl;
    }
}
