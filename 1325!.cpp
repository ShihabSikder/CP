#include<bits/stdc++.h>
#include<algorithm>


using namespace std;

int main(){
    for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
        cout<<"("<<__gcd(i,j)<<"), "<<(i*j)/gcd<<" ";
    }
    cout<<endl;
    }
}
