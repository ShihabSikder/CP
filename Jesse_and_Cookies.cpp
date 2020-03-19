#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    priority_queue<int, vector<int>, greater<int>>sweet;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sweet.push(a);
    }

    int mix=0;
    while(sweet.size()>=2 && sweet.top()<k){
        int biscuit1 = sweet.top();
        sweet.pop();
        int biscuit2 = sweet.top();
        sweet.pop();
        int new_biscuit = biscuit1+2*biscuit2;
        sweet.push(new_biscuit);
        mix++;
    }
    if(sweet.top()>=k) cout<<mix;
    else cout<<-1;
}
