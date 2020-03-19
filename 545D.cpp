#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>people;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        people.push_back(temp);
    }
    sort(people.begin(),people.end());
    int compare=0,x=0;
    for(int i=0;i<n;i++){
        if(compare<=people[i]){
            compare+=people[i];
            x++;
        }
    }
    cout<<x<<endl;
}
