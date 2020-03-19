#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int>adj[2010];
int cnt = 0;
int dfs(int a,int level){
    //cout<<level<<endl;
    cnt = max(cnt,level);
    for(int i=0;i<adj[a].size();i++){

        dfs(adj[a][i],level+1);

    }

}

int main(){
    int x,n,t;
    cin>>n;
    //int num[n+10];
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x!=-1)adj[x].pb(i);
        else adj[0].pb(i);
    }
    for(int i=0;i<adj[0].size();i++){
        dfs(adj[0][i],1);
    }
    cout<<cnt<<endl;
    return 0;
}
