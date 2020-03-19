#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main(){
    int n;
    cin>>n;
    int num[n+10];
    for(int i=1;i<=n;i++)
        cin>>num[i];
    bool love = false;
    for(int i=1;i<=n;i++){
        if(i==num[num[num[i]]]){
            yes
            love = true;
            break;
        }
    }
    if(!love)
        no
    return 0;
}
