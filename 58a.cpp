#include<bits/stdc++.h>

using namespace std;

int main(){
    string x,y="hello";
    int c=0,j=0;
    cin>>x;
    int n = x.size();
    for(int i=0;i<n;i++){
        if(x[i]==y[j]){
            c++;
            j++;
        }
    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}