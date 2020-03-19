#include<bits/stdc++.h>
using namespace std;

struct trie{
    bool isEnd;
    trie *next[10];
    trie(){
        isEnd = false;
        for(int i=0;i<10;i++)
            next[i]=NULL;
    }
}*root;

void clearTrie(trie *current){
    for(int i=0;i<10;i++){
        if(current->next[i])
            clearTrie(current->next[i]);
    }
    delete(current);
}

bool Insert(trie *current, string str){
    int length = str.size();
    bool result = 0;
    for(int i=0;i<length;i++){
        int index = str[i]-'0';
        if(!current->next[index])
            current->next[index]=new trie();
        if(current->isEnd){
            result = 1;
            break;
        }
        current = current->next[index];
    }
    current->isEnd = 1;
    return result;
}
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        root = new trie();
        int t1; bool result = 0;
        cin>>t1;
        string temp;
        vector<string>str;
        for(int i=0;i<t1;i++){
            cin>>temp;
            str.push_back(temp);
        }
        sort(str.begin(),str.end());
        //cout<<"done sort"<<endl;
        for(int i=0;i<t1;i++){
            //cout<<"for loop"<<endl;
            result = Insert(root,str[i]);
            //cout<<"Inserted to trie"<<endl;
            if(result) break;
        }
       // cout<<"exit for loop"<<endl;
        if(result)
            cout<<"Case "<<j<<": "<<"NO"<<endl;
        else
            cout<<"Case "<<j<<": "<<"YES"<<endl;
        clearTrie(root);
    }
    return 0;
}
