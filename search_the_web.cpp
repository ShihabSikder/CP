#include<bits/stdc++.h>

using namespace std;

int nextturn(string ch){
    if(ch=="VISIT") return 1;
    if(ch=="FORWARD") return 2;
    if(ch=="BACK") return 3;
}

int main(){
    int t;
    cin>>t;
    stack<string>a;
    stack<string>b;
    int turn=0;
    string choice;

    for(int i=1;i<=t;i++){
        cin>>choice;
        while(!a.empty()){
            a.pop();
        }
        while(!b.empty()){
            b.pop();
        }
        string url="http://www.lightoj.com/";
        cout<<"Case "<<i+1<<":"<<endl;

        while(choice!="QUIT"){
            switch(nextturn(choice)){
            case 1:
                b.push(url);
                cin>>url;
                cout<<url<<endl;
                while(!a.empty()){
                    a.pop();
                }
                break;
            case 2:
                if(a.empty()) cout<<"Ignored"<<endl;
                else{
                    b.push(url);
                    url=a.top();
                    b.pop();
                    cout<<url<<endl;
                }
                break;
            case 3:
                if(b.empty())cout<<"Ignored"<<endl;
                else{
                    a.push(url);
                    url = b.top();
                    b.pop();
                    cout<<url<<endl;
                }
                break;
            }
            cin>>choice;
        }
        cout<<"Ignored"<<endl;
    }
}
