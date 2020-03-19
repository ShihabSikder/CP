#include<bits/stdc++.h>
using namespace std;
#define game_theory_kemne_kaj_kore_jani_na return 0;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int dim;
        cin>>dim;
        int white[dim],black[dim];
        for(int k=0;k<dim;k++)
            cin>>white[k];
        for(int j=0;j<dim;j++)
            cin>>black[j];
        int result = 0;
        for(int j=0;j<dim;j++){
            result = result ^ (black[j]-white[j]-1);
        }
        if(result)
            cout<<"Case "<<i<<": white wins"<<endl;
        else cout<<"Case "<<i<<": black wins"<<endl;
    }
game_theory_kemne_kaj_kore_jani_na
}
