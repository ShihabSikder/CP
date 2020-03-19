#include<bits/stdc++.h>
using namespace std;
long long comp=0;
struct trie{
    trie *child[4];
    int cnt;
    trie(){
        for(int i=0;i<4;i++)
            child[i]=NULL;
        cnt=0;
    }
}*root;

void clearTrie(trie *current){
    for(int i=0;i<4;i++){
        if(current->child[i])
            clearTrie(current->child[i]);
    }
    delete(current);
}

int getIndex(char ch){
    if(ch=='A')return 0;
    else if(ch=='C')return 1;
    else if(ch=='G')return 2;
    else if(ch=='T')return 3;
}
void Insert(string str){
    trie *current = root;
    for(int i=0;i<str.size();i++){
        int index = getIndex(str[i]);
        if(!current->child[index])
            current->child[index]=new trie();
        current = current->child[index];
        current->cnt++;
    }
}
void DFS(trie *current,int level){
    long long temp = (current->cnt)*level;
    if(temp>comp)
        comp = temp;
    for(int i=0;i<4;i++){
        if(current->child[i])
            DFS(current->child[i],level+1);
    }
}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        root = new trie();
        int a;
        cin>>a;
        string str;
        comp = 0;
        while(a--){
            cin>>str;
            Insert(str);
        }
        DFS(root,0);
        cout<<"Case "<<k<<": "<<comp<<endl;
        clearTrie(root);
    }
}
